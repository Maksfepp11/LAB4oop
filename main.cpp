#define NOMINMAX  
#define WIN32_LEAN_AND_MEAN  
#include "fiction.h"      
#include "ebook.h"         
#include "textbook.h"      
#include "publication.h"   
#include "book.h"         
#include <windows.h>         

int main() {
    SetConsoleOutputCP(65001); 

    

    Fiction f;  // Створення об'єкта класу Fiction
    f.SetTitle("Тіні забутих предків");           
    f.SetPublisher("Веселка");                    
    f.SetYear(1980);                              
    f.SetAuthor("М. Коцюбинський");               
    f.SetPages(180);                               
    f.SetGenre("Драма");                          
    f.Describe();   
    // e, t, f - це обєкти класу яка має власні значення для характеристик    
    // Describe - це метод який виводить всю інфу                           

    cout << "\n----------------\n";  

    EBook e;  // Створення об'єкта класу EBook
    e.SetTitle("C++ Basics");                      
    e.SetPublisher("O’Reilly");                    
    e.SetYear(2023);                               
    e.SetAuthor("J. Doe");                    
    e.SetPages(320);                             
    e.SetFileSize(5.2);                           
    e.SetFormat("PDF");                         
    e.Describe();                                  

    cout << "\n----------------\n";

    Textbook t;  // Створення об'єкта класу Textbook
    t.SetTitle("Алгебра");                          
    t.SetPublisher("Освіта");                       
    t.SetYear(2020);                                 
    t.SetAuthor("Іваненко");                        
    t.SetPages(250);                                
    t.SetSubject("Математика");                     
    t.SetGrade(9);                                   
    t.Describe();       
    
    return 0;  // Успішне завершення програми
}
