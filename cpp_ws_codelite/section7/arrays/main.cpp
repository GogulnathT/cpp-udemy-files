#include <iostream>
using namespace std;

int main()
{
    char vowels[] {'a','e','i','o','u'};
    cout<<"The first vowel is "<<vowels[0];
    cout<<"\nThe last vowel is "<<vowels[4];
    int test_scores[5]{0};
    cout<<"\nTest score at 0 is "<<test_scores[0];
    cout<<"\nTest score at 1 is "<<test_scores[1];
    cout<<"\nTest score at 2 is "<<test_scores[2];
    cout<<"\nTest score at 3 is "<<test_scores[3];
    cout<<"\nTest score at 4 is "<<test_scores[4];
    cout<<"\nEnter new";
    cin>>test_scores[0]>>test_scores[1]>>test_scores[2];
    cout<<"\nTest score at 0 is "<<test_scores[0];
    cout<<"\nTest score at 1 is "<<test_scores[1];
    cout<<"\nTest score at 2 is "<<test_scores[2];
    cout<<"\nTest score at 3 is "<<test_scores[3];
    cout<<"\nTest score at 4 is "<<test_scores[4];
    cout<<&test_scores[1] ;
    return 0;
}