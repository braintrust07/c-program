 #include<stdio.h>
 int welcome ();          
 int main()    
 { 
  printf("Before welcome\n");
          welcome();  //Function Call
          printf("after welcome\n");                
}
 int welcome()                 
 {
       printf("Welcome to C\n");
 }