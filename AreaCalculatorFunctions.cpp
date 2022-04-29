/*
Area Calculator Functions
Pawelski
4/29/2022
Please follow the instructions on the activity guide.
*/

#include <iostream>
#include <string>

/// <summary>
/// Calculates the area of a rectangle with the given base and height.
/// </summary>
/// <param name="base">Base measurement of rectangle.</param>
/// <param name="height">Height measurement of rectangle.</param>
/// <returns>Area of the rectangle.</returns>
double RectangleArea(double base, double height)
{
    return base * height;
}

int main()
{
    std::string repeat;
    do
    {
        // ask the user for the shape
        std::string shape;
        std::cout << "What shape do you need to calculate the area for? (rectangle, square, triangle, parallelogram) >> ";
        std::cin >> shape;
        while (!(shape == "rectangle" || shape == "square" || shape == "triangle" || shape == "parallelogram"))
        {
            std::cout << "Invalid input. Please enter either rectangle, square, triagnle, or parallelogram.\n";
            std::cout << "What shape do you need to calculate the area for? (rectangle, square, triangle, parallelogram) >> ";
            std::cin >> shape;
        }

        // calculate area of the entered shape
        if (shape == "rectangle")
        {
            int base, height;
            std::cout << "Enter the base >> ";
            std::cin >> base;
            std::cout << "Enter the height >> ";
            std::cin >> height;
            std::cout << "The rectangle's area is: " << RectangleArea(base, height) << std::endl;
        }
        else if (shape == "square")
        {
            int side;
            std::cout << "Enter the side length >> ";
            std::cin >> side;
            std::cout << "The square's area is: " << RectangleArea(side, side) << std::endl;
        }
        else if (shape == "triangle")
        {
            int base, height;
            std::cout << "Enter the base >> ";
            std::cin >> base;
            std::cout << "Enter the height >> ";
            std::cin >> height;
            std::cout << "The triangle's area is: " << RectangleArea(base, height) / 2 << std::endl;
        }
        else if (shape == "parallelogram")
        {
            int base, height;
            std::cout << "Enter the base >> ";
            std::cin >> base;
            std::cout << "Enter the height >> ";
            std::cin >> height;
            std::cout << "The parallelogram's area is: " << RectangleArea(base, height) << std::endl;
        }

        // repeat program
        std::cout << "Would you like to calculate the area of another shape? (y/n) >> ";
        std::cin >> repeat;
        while (!(repeat == "y" || repeat == "n"))
        {
            std::cout << "Invalid input. Please enter either y or n.\n";
            std::cout << "Would you like to calculate the area of another shape? (y/n) >> ";
            std::cin >> repeat;
        }
    } while (repeat == "y");
    return 0;
}
