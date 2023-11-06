#!/usr/bin/python3
class BaseGeometry:
    """Empty class BaseGeometry."""

    def area(self):
        """Calculate the area.

        This method is not implemented and should be overridden in subclasses.

        Raises:
            Exception: This method is not implemented.
        """
        raise Exception("area() is not implemented")
