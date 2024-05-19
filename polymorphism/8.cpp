// abstract base class and pure virtual function.

// abstract base class-> has virtual function atleast one of which is always
// redefined in derived classes.ie. has atleast one pure virtual function.

#include <cstring>
#include <iostream>
using namespace std;

class CWH {
protected:
  string title;
  float rating;

public:
  CWH(string s, float r) {
    title = s;
    rating = r;
  }
  virtual void display() = 0; // do nothing function or pure virtual function.
                              // void display()
                              // {
                              //     cout << "Bogus code \\_('-')_/" << endl;
                              // }
};

class CWHVideo : public CWH {
  float videoLength;

public:
  CWHVideo(string s, float r, float vl) : CWH(s, r) { videoLength = vl; }
  void display() {
    cout << "This is an amazing video with title: " << title << endl;
    cout << "This video has rating: " << rating << " out of 5 stars." << endl;
    cout << "This video is of " << videoLength << " minutes." << endl;
  }
};
class CWHText : public CWH {
  int words;

public:
  CWHText(string s, float r, int wc) : CWH(s, r) { words = wc; }
  void display() {
    cout << "This is an amazing blog post with title: " << title << endl;
    cout << "This page has rating: " << rating << " out of 5 stars." << endl;
    cout << "This page has " << words << " words." << endl;
  }
};

int main() {
  string title;
  float rating, vlen;
  int words;
  // for cwh video
  title = "This is a django tutorial.";
  vlen = 4.56;
  rating = 4.89;
  CWHVideo djVideo(title, rating, vlen);
  // djVideo.display();

  // for cwh text
  title = "This is a django tutorial text.";
  rating = 4.19;
  words = 433;
  CWHText djText(title, rating, words);
  // djText.display();

  //

  CWH *tuts[2];
  tuts[0] = &djVideo;
  tuts[1] = &djText;
  tuts[0]->display();
  tuts[1]->display();
  return 0;
}

// Rules for virtual function.
// 1) They can't be static.
// 2) They need to be accesed by object pointers only.
// 3) Virtual functions can be a friend of another class.
// 4) A function in base class might not be used.
// 5) If a virtual function is defined in the base class, there is no necessity
// of redefining it in the derived class.