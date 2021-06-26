
#include <bits/stdc++.h>
using namespace std;

/* This function sets the values of
*x and *y to non-repeating elements
in an array arr[] of size n*/
void NonRepeatingNum(int arr[], int n,
                     int *x, int *y)
{
    /* Will hold Xor of all elements */
    int Xor = arr[0];

    /* Will have only single set bit of Xor */
    int set_bit_no;
    int i;
    *x = 0;
    *y = 0;

    /* Get the Xor of all elements */
    for(i = 1; i < n; i++)
        Xor ^= arr[i];

    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = Xor & ~(Xor-1);

    /* Now divide elements in two sets by
    comparing rightmost set bit of Xor with bit
    at same position in each element. */
    for(i = 0; i < n; i++)
    {

        /*Xor of first set */
        if(arr[i] & set_bit_no)
            *x = *x ^ arr[i];
            /*Xor of second set*/
        else
        {
            *y = *y ^ arr[i];
        }
    }
}

/* Driver code */
int main()
{
    string s;
    string temp;
    int exclusive = 0;
    cout << "Enter integers: ";
    while(getline(cin, s))
    {
        if (s == "\n") {
            break;
        }
//cout << s << endl;
        stringstream stream(s);
        vector<int> input;
        while(stream >> exclusive)
            input.push_back(exclusive);
        // print(input);
        int array = input.size();
        int arr[array];
        for(int i = 0; i < array; i++){
            arr[i] = input[i];
        }
        for(int i: arr) {
        }
        int n = sizeof(arr)/sizeof(*arr);
        int *x = new int[(sizeof(int))];
        int *y = new int[(sizeof(int))];
        NonRepeatingNum(arr, n, x, y);
        cout << "Exclusive: "<< *x;
        break;
    }
    return 0;
}


