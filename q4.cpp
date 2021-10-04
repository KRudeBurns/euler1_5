//for q4 is it a palindrome?
int is_palindrome(int x)
{
    int num = x;
    int remainder = 0;  //remainder after dividing x by ten
    int reverse = 0; //reversed output which is remainder + (reverse * 10)


     //reverse int x
     while(num != 0)
     {
         remainder = num % 10;
         reverse = remainder + (reverse * 10); 
         num = num / 10;         
     }

     if (reverse == x)
     {
         return reverse;
     }
     else 
     return 0;
}


void q4()
{
    /*
    
    A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 
    9009 = 91 × 99.
    
    Find the largest palindrome made from the product of two 3-digit numbers.
    */

    int product = 0, max = 0, i_max, j_max;

    //for compiler speed, start at the top and work your way down.
    for (int i = 999;  i > 99; --i)
        for (int j = 999; j > 99; --j)
        {
            if (is_palindrome(product = i * j) > max)
            {  
                max = is_palindrome(product = i * j);
                i_max = i, j_max = j;
            }
        }
    
    
    cout << i_max  << " * " << j_max << endl; 
    cout << max << endl;
}



int main()
{  
  q4();
}