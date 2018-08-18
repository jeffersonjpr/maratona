using namespace std;

vector<string> wave(string y){
  vector<string> resp;
  for(int i = 0;i < y.length();i++){
      if(y[i] == 32) continue;
      y[i] = toupper(y[i]);
      resp.push_back(y);
      y[i] = tolower(y[i]);
  }
  return resp;
}

//https://www.codewars.com/kata/mexican-wave/cpp
