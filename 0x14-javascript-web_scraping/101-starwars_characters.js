#!/usr/bin/node

const request = require('request');
const id = process.argv[2];
const url = `https://swapi-api.alx-tools.com/api/films/${id}`;

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  } else {
    const filmData = JSON.parse(body);
    const charactersUrls = filmData.characters;

    // Function to get character details
    const getCharacterDetails = (characterUrl) => {
      request.get(characterUrl, (error, response, body) => {
        if (error) {
          console.log(error);
        } else {
          const characterData = JSON.parse(body);
          console.log(characterData.name);
        }
      });
    };

    // Iterate through characters and get details
    charactersUrls.forEach(getCharacterDetails);
  }
});
