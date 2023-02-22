#include <iostream>
#include <vector> //we have to use this header file to use vectors
using namespace std; //including standard library is important for vectors as the methods for vectors are stored in it 
int main()
{
    //vector<char> vowels;  //empty vector
    //vector<char> vowels(5) //5 elements with 0 initialization
    vector<int> test_scores{100, 50, 89};
    cout<<test_scores.at(2)<<endl;
    cout<<"The size os test score vector is "<<test_scores.size()<<endl;
    vector<float> height(10, 160.045);
    cout<<height[2];
    cout<<"\n"<<"Enter three new heights\n";
    cin>>height[7];
    cin>>height.at(8);
    cin>>height.at(9);
    cout<<"the heights at 7 and 8 are "<<height[6]<<" and "<<height.at(7)<<endl;
    cout<<"enter new extra test scores to be added to the testscore vector"<<endl;
    int extra_score {0};
    cin>>extra_score;
    test_scores.push_back(extra_score);
    cout<<"1st test score is "<<test_scores.at(0)<<endl;
    cout<<"2nd test score is "<<test_scores.at(1)<<endl;
    cout<<"3rd test score is "<<test_scores.at(2)<<endl;
    cout<<"4th test score is "<<test_scores.at(3)<<endl;
    cout<<"The size of the test score vector is "<< test_scores.size()<<endl;
    return 0;
}