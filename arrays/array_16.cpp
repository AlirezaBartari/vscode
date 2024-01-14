#include <iostream>
using namespace std;

int main()
{
    int n, answer ,answers[21] , positive, negative, score;

    for(int i=1 ; i<21 ; i++)
    {   cout<<"answer "<<i<<" : ";
        cin>>answers[i];
    }
    cout << " how many students ? ";
    cin >> n;

    for(int i=0; i<n; i++)
    {   cout << "student number ";
        positive=0;
        negative=0;
        score =0;
        for(int j=1; j<21 ; j++)
        {   for(int i=1 ; i<21 ; i++)
            {   cin >> answer; 
                if(answer == answers[j])
                {    positive ++;
                    score += 3;
                }    
                else 
                {    negative ++;
                    score -= 1;  
                }
            }    
        cout << "student: " << j << "  with score : "<<score;
        }
        

    }

}