#include <iostream>
using namespace std;

//Still due to multithreading, this can fail as two threads can access the getInstance() at the same time and create two instances
//Following solution can be used to avoid this
//1. Use early initialization rathe than lazy initialization

//2. mark getInstance() as synchronized but it will slow down the performance so we can use a double check locking mechanism which is 
// check if instance is null and then lock the object and then check again if it is null then create the object
/* #include <mutex>
 static std::mutex mtx;
 static Singleton  *getInstance()
    {
        if (instance == NULL)
        {
             lock_guard<mutex> lock(mtx);
            if (instance == NULL)
            {
                instance = new Singleton();
            }
           
        }
        return instance;
    } 


    mutex Singleton::mtx;
*/



class Singleton
{
private:
    static Singleton  *instance;
    //1. Early initialization (outside the class)
    /*static Singleton  *instance = new Singleton();
    public : static Singleton  *getInstance()
    {
        return instance;
    }*/

    Singleton()
    {
        cout << "Singleton Created" << endl;
    }

public:
    static Singleton  *getInstance()
    {
        if (instance == NULL)
        {
            instance = new Singleton();
        }
        return instance;
    }
};

//Static memeber of class cannot be initialized inside the class 
Singleton *Singleton::instance = NULL;
//Singleton *Singleton::instance = new Singleton(); //Early initialization

int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    
    return 0;

}