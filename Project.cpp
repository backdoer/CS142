#include<iostream>
using namespace std;

const int LARGE_BOX_CAPACITY = 10;
const int SMALL_BOX_CAPACITY = 5;

int main()
{
    int number_of_books;
    cout << "Enter number of books: ";
    cin >> number_of_books;
    
    int large_boxes = number_of_books / LARGE_BOX_CAPACITY;
    cout << "Lare boxes: "<< large_boxes << endl;
    
    number_of_books = number_of_books % LARGE_BOX_CAPACITY;
    int small_boxes = number_of_books / SMALL_BOX_CAPACITY;
    if (number_of_books%SMALL_BOX_CAPACITY > 0) {
        small_boxes++;
    }
    
    cout << "Small boxes: " << small_boxes << endl;
    
    return 0;
}