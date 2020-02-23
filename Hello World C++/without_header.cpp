//Declare the printf() function inside 
//extern "C" for C++ compiler 
extern "C"
{ 
	int printf(const char *format, ...); 
} 
  
int main() 
{ 
  printf( "Hello World" ); 
  return 0; 
} 

