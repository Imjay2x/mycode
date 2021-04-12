#include <iostream>
#include <vector>
#include <string>

int main() {
  const int NUM_BOOK = 3;
  std::vector<std::string> bookName (NUM_BOOK);
  std::vector<std::string> isbnNum (NUM_BOOK);
  int i;
std::string bookInfo;

bookName.at(0) = "Champion";
isbnNum.at(0) = " 014751228X";

bookName.at(1) = "No, David!";
isbnNum.at(1) = "0590930036";

bookName.at(2) = "Diary of a wimpy kid";
isbnNum.at(2) = "1419741853";

std::cout << "Please enter the book title: " << std::endl;
std::getline(std::cin, bookInfo);

for (i = 0; i < bookName.size(); ++i) {
  if (bookInfo == bookName.at(i)){
    std::cout << "Book Name: " << bookName.at(i) << std::endl;
    std::cout << "ISBN Number: " << isbnNum.at(i) << std::endl;
  }
}
return 0;
}