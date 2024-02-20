#!/usr/bin/node

const request = require('request');
const id = process.argv[2];
const url = `https://swapi-api.alx-tools.com/api/films/${id}`;

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  } else {
    try {
      const filmData = JSON.parse(body);
      const charactersUrls = filmData.characters;

      // Function to get character details
      const getCharacterDetails = (characterUrl) => {
        request.get(characterUrl, (error, response, body) => {
          if (error) {
            console.log(error);
          } else {
            try {
              const characterData = JSON.parse(body);
              console.log(characterData.name);
            } catch (characterError) {
              console.log(characterError);
            }
          }
        });
      };

      // Iterate through characters and get details
      charactersUrls.forEach(getCharacterDetails);

    } catch (parseError) {
      console.log(parseError);
    }
  }
});
