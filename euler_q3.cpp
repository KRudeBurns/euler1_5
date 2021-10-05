/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl;
void q3()
{
    std::vector<unsigned long> prime_list, factor_list;
    //per stack overflow, I only want the square root which eliminates half the factors already
    //https://stackoverflow.com/questions/201374/project-euler-question-3-help
    //all other work is mine
    //i am sure there is a better way 
    long int interest_number =  sqrt(600851475143);

    //factor_list is my lazy approach. This needs to be cleaned up later. 
    
    if(interest_number % 2 == 0)
        prime_list.push_back(2);   
    else  if(interest_number % 3 == 0)
        prime_list.push_back(3);   
    else
        prime_list.push_back(5);


    
    bool prime_flag = false;
    for(long int n = 2; n <= interest_number; ++n)
    {
        //we only need to search half the size of our interested value
        if (interest_number % n == 0)  //for space I only want to run my loop if n is a factor of my interest_number      
            for(int j = 0; j < prime_list.size(); ++j)
            {                      
                prime_flag = false;

                if (n % prime_list[j] == 0)  {
                    break;                               
                }            
                prime_flag = true;
            }

            //this if shows us a number is a prime and a factor of 13195
            if (prime_flag == true)
            {                                              
                factor_list.push_back(n);
                prime_list.push_back(n);                                
            }
    }

    //print the list of factors    
    cout << "list of primes: \n";
    /*for (int x : factor_list)
    {
         cout << x << " ";
    }*/
    

    //i only want the last factor which will be the largests
    cout << factor_list.back() << endl;

}
int main()
{
   q3();
}
