#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Question {
    string question;
    vector<string> options;
    int correctAnswer;
};



int main() {
  cout << "Tēmas tests : \n";
  cout << "Cikls ar skaitītāju programmēšanas valodā C++\n\n";
    vector<Question> questions = {
        {"Kāda sintakse tiek izmantota skaitītāja ciklam programmēšanas valodā C++?",
         {"0) for (sākuma_vērtība; turpināšanas_noteikums; solis) {} ",
          "1) while (noteikums) {} ",
          "2) do {} while (noteikums)",
          "3) repeat (noteikums) {}\n\n",
         0},

        {"Kuru ciklu vēlamāk izmantot, ja iepriekš nav zināms, cik iterācijas tiks izpildītas?",
         {"0)  for",
          "1) while",
          "2) do-while",
          "3) jebkuru no tām var izmantot\n"},
          3},

        {"Kura cikla daļa ar skaitītāju nosaka skaitītāja sākuma vērtību?",
         {"0) Sākuma vērtība",
          "1) Turpinājuma nosacījums",
          "2) Solis",
          "3) Koda bloks\n"},
         1},


        {"Kura cikla daļa ar skaitītāju pārbauda, vai cikls ir jāturpina vai jāpabeidz tā izpilde?",
         {"0) Solis",
          "1) Sākuma vērtība",
          "2) Koda bloks",
          "3) Turpinājuma nosacījums\n"},
         3},

         {"Kura cikla daļa ar skaitītāju maina skaitītāja vērtību pēc katras cikla atkārtošanas?",
         {"0) Koda bloks",
          "1) Turpinājuma nosacījums",
          "2) Solis",
          "3) Sākuma vērtība\n"},
          2},

        {"Cik reižu tiks izpildīts nākamais cikls: for (int i = 0; i < 10; i++) {}?",
         {"0) 0",
          "1) 9",
          "2) 1",
          "3) 10\n"},
          3},

        {"Kāda būs programmas izvade, veicot nākamo ciklu: for (int i = 5; i >= 0; i--) { std::cout << i << " ";}?",
         {"0) 5 4 3 2 1",
          "1) 4 3 2 1",
          "2) 5 4 3 2 1 0",
          "3) 4 3 2 1 0\n"},
          2},

        {"Kāda būs programmas izvade, veicot nākamo ciklu: for (int i = 8; i >= 0; i--) { std::cout << i << " ";};",
         {"0) 8 7 6 5 4 3 2 1 0",
          "1) 8 7 6 5 4 3 2 1",
          "2) 7 6 5 4 3 2 1",
          "3) 9 8 7 6 5 4 3 2 1 0 \n"},
          0},

       {"Kāda būs programmas izvade, veicot nākamo ciklu:for(int i = 0; i < 5; i += 2) { std::cout << i << " "; }",
         {"0) 0 1 2 3 4",
          "1) 0 2 4",
          "2)  1 3",
          "3) 5 6 7 8 9\n"},
          1},

       {"Kas notiks, ja cikla turpināšanas nosacījumā tiks norādīta nepatiesa izteiksme?",
         {"0) Cikls nekad netiks izpildīts",
          "1) Tiks parādīta kompilēšanas kļūda",
          "2) Programma beigsies ar izpildlaika kļūdu",
          "3) Sākuma vērtība\n"},
          2},

    };

    int totalQuestions = questions.size();
    int correctCount = 0;
    vector<int> incorrectIndices;

    for (int i = 0; i < totalQuestions; ++i) {
        cout << "Jautājums " << (i + 1) << ": " << questions[i].question << endl;
        for (int j = 0; j < questions[i].options.size(); ++j) {
            cout << questions[i].options[j] << endl;
        }

        int userAnswer;
        cout << "Ievadiet pareizā atbildes varianta numuru: ";
        cin >> userAnswer;

        if (userAnswer == questions[i].correctAnswer) {
            correctCount++;
        } else {
            incorrectIndices.push_back(i);
        }

        cout << endl;
    }

    cout << "Pareizo atbilžu skaits: " << correctCount << " из " << totalQuestions << endl;

    if (!incorrectIndices.empty()) {
        cout << "Jautājumu saraksts, uz kuriem sniegtas nepareizas atbildes:" << endl;
        for (int index : incorrectIndices) {
            cout << "- " << questions[index].question << endl;
            cout << "Pareizā atbilde: " << questions[index].options[questions[index].correctAnswer] << endl;
        }
    }

    return 0;
}
}
