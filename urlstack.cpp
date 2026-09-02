#include<iostream>
using namespace std;

#define max 5

class BrowseHistory {  // Fixed: Removed the incorrect semicolon
  public:  
  string history[max];  
  int top;  
    
  BrowseHistory()  
  {    
    top = -1;  // Fixed: Changed '==' to '=' to properly initialize top
  }  

  void push(string url)  
  {    
    if(top == max - 1)    
    {      
      cout << "history is full\n";    
    }    
    else    
    {      
      top++;      
      history[top] = url;      
      cout << "visited\n";    
    }  
  }  

  void pop()  
  {    
    if(top == -1)    
    {      
      cout << "no previous page is available\n";    
    }    
    else    
    {      
      cout << "back to: " << history[top-1] << "\n"; 
      top--;  // Fixed: Added top decrement to actually remove the page
    }      
  }  

  void display()  
  {    
    if(top == -1)    
    {      
      cout << "No page is currently open.\n";    
    }       
    else    
    {      
      cout << "Current page: " << history[top] << "\n";    
    }  
  }  

  void displayHistory()   // Fixed: Added space between 'void' and 'displayHistory'
  {    
    if (top == -1)    
    {      
      cout << "Browsing history is empty.\n";    
    }     
    else    
    {      
      cout << "Browsing History (top to bottom):\n";      
      for (int i = top; i >= 0; i--)      
      {        
        cout << history[i] << "\n";      
      }    
    }  
  }
};

int main()
{    
    BrowseHistory student;        
    
    student.push("login");    
    student.push("dashboard");    
    student.push("courses");    
    student.push("results");        
    
    cout << "\n";        
    student.display();    
    
    cout << "\n";        
    student.displayHistory();    
    
    cout << "\n";                
    student.pop();    
    
    cout << "\n";        
    student.display();    
    
    return 0; 
}

