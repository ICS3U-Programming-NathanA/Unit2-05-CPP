// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Sept 22 2022
// scope of variables

#include <iostream>

int main() {
  // declare variables
    int numOfPeople = 8;
    float width = 57.5;
    float length = 16.9;
    std::string myNameIs = "My Name is";
    std::string myName = " Nathan";
  // calculate area and perimeter
    int newNumOfPeople = numOfPeople + 3;
    float areaOfRectangle = length * width;
    std::string myNameFinal = myNameIs + myName;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "The total number of people is " << newNumOfPeople <<"\n";
  std::cout << "The area is " << areaOfRectangle <<" cm^2.\n";
  std::cout << "The total number of people is " << myNameFinal <<"\n";
}
