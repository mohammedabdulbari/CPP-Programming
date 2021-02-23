#include<iostream>
using namespace std;
    
class MyException1: exception
    {
        
    };
    
class MyException2:public MyException1
    {
        
    };
    
int main()
    {
	    try
	        {
		        throw MyException1();
	        }
	        
	    catch(MyException2 e)
	        {
		        cout<<"int catch"<<endl;
        	}
        	
	    catch(MyException1 e)
	        {
	        	cout<<"double catch"<<endl;
	        }
	        
	    catch(...)
	        {
		        cout<<"all catch"<<endl;
	        }
	        
    }
    
