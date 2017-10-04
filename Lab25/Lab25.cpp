//Created By: Carter Dishman   
//Created On: 10/3/2017      
 
 #include <iostream> 
 #include <string>
 #include <cmath>

 using namespace std;
 
 class Book {
     public:
     void SetTitle(string BookTitle);
     string GetTitle();
     void SetAuthor(string BookAuthor);
     string GetAuthor();
     void SetCRY(int BookCRY);
     int GetCRY();
     void Print();
     
     
     
     private:
     string Author;
     string  Title;
     int     CRY;
 };
 
 
 
 void Book::Print() {
    cout << GetTitle() << " by "  << GetAuthor() << ", published in the year " << GetCRY() << endl;
    cout << endl;
}
 
 
int main() {
 
 

     Book book1, book2, book3, book4, book5;
     
     book1.SetTitle("1984");
     book1.SetAuthor("George Orwell");
     book1.SetCRY(1949);
     
     
     book2.SetTitle("To Kill a Mockingbird");
     book2.SetAuthor("Harper Lee");
     book2.SetCRY(1960);
     
     
     book3.SetTitle("The Great Gatsby");
     book3.SetAuthor("F. Scott Fitzgerald");
     book3.SetCRY(1925);
     
     
     book4.SetTitle("Pride and Prejudice");
     book4.SetAuthor("Jane Austen");
     book4.SetCRY(1813);
     
     
     book5.SetTitle("The Catcher in the Rye");
     book5.SetAuthor("J. D. Salinger");
     book5.SetCRY(1951);
     
     
     
     book1.Print();
     book2.Print();
     book3.Print();
     book4.Print();
     book5.Print();
     
     
     return 0;
 }
 
 void Book::SetTitle(string BookTitle) {
     Title = BookTitle;
     return;
 }
 
 void Book::SetAuthor(string BookAuthor) {
     Author = BookAuthor;
     return;
 }
 
 void Book::SetCRY(int BookCRY) {
     CRY = BookCRY;
     return;
 }
 
 string Book::GetAuthor() {
     return Author;
 }
 
 
  string Book::GetTitle() {
     return Title;
 }
 
 
 int Book::GetCRY() {
     return CRY;
 }
 
 
 
 
 
 /*1984 by George Orwell, published in the year 1949


To Kill a Mockingbird by Harper Lee, published in the year 1960


The Great Gatsby by F. Scott Fitzgerald, published in the year 1925


Pride and Prejudice by Jane Austen, published in the year 1813


The Catcher in the Rye by J. D. Salinger, published in the year 1951
*/