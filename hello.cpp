#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    while (1)
    {
        char ch[1000];

        cout << "\n\n*******Welcome I am FAQ AI Based Chat BOT*********\n\n"
             << endl;
        cout << "What is the theme of the Hackathon?" << endl
             << "What will be provided during the Hackathon?" << endl
             << "On what basis will the teams be shortlisted?" << endl
             << "What should be the team size? " << endl
             << "Is there any specific eligibility criteria for the participants? " << endl
             << "Is there any prize apart from the top 3 participants?" << endl
             << "I'm a beginner, should I participate? " << endl
             << "Did we miss out anything? " << endl
             << " " << endl;

        cout << "\n\n";
        gets(ch);

        if (strcmp(ch, "What is the theme of the Hackathon?") == 0)
        {
            cout << "We at HackNITRR admire to assist our geeks to explore new domains,"
                 << " hence there isn’t any specific theme. However, once you have been shortlisted, we'll publish the problem statements in this website." << endl;
        }

        else if (strcmp(ch, "What will be provided during the Hackathon?") == 0)
        {
            cout << "CodeUtsava stands out among all hackathons for its hospitality."
                 << "So gear yourselves up for high cash prizes, huge discount coupons, exciting goodies, and fun activities to make your hacking experience a memorable one." << endl;
        }
        else if (strcmp(ch, "On what basis will the teams be shortlisted?") == 0)
        {
            cout << "Your resume says it all!! Hence,"
                 << " teams would be shortlisted on the basis of resume and Git-Hub profiles of the team members as uploaded at the time of registration." << endl;
        }
        else if (strcmp(ch, "What should be the team size?") == 0)
        {
            cout << "Teams must consist of a minimum of 2 members and maximum 6 members. For any queries, please contact our team." << endl;
        }
        else if (strcmp(ch, "Is there any specific eligibility criteria for the participants?") == 0)
        {
            cout << "Age is no bar for our developers at CodeUtsava."
                 << " All that matters to us is the zeal to code and developer."
                 << " No matter from which stream you belong, whether you're from engineering or arts or commerce or any other stream,"
                 << " if you're a student, you can participate.          " << endl;
        }
        else if (strcmp(ch, "Is there any prize apart from the top 3 participants?") == 0)
        {
            cout << "The answer is a big “yes”. Separate prizes have been kept for the best team performing in each category of problem statements." << endl;
        }
        else if (strcmp(ch, "I'm a beginner, should I participate?") == 0)
        {
            cout << "Yeah for sure. Everyone is a beginner when they start something new. This is how we learn. Learning and experiencing things play an important part in our way of success." << endl;
        }
        else if (strcmp(ch, "Did we miss out anything?") == 0)
        {
            cout << "For further doubts/queries you can contact us at: codeutsava@nitrr.ac.in"
                 << "Mob - +91-74249 60073 , +91-9672959939" << endl;
        }
        else
        {
            cout << "Sorry Try Contact Us Page on Our Website" << endl;
        }
    }
    
}