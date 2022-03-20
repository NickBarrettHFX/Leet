#include <iostream>

int Solution::romanToInt(string s) {        
        int total = 0;
        
        for(int index = 0; index <  s.length(); index++){         
            if(index+1 <= s.length()){ /* subtraction case */
                cout << "s[index] = " << s[index] << endl;
                if(s[index] == 'I'){
                    if(s[index + 1] == 'V'){
                        total = total + 4;
                        index++;
                        continue;
                    } else if(s[index + 1] == 'X'){
                        total = total + 9;
                        index++;
                        continue;
                    }
                } else if(s[index] == 'X'){
                    if(s[index + 1] == 'L'){
                        total = total + 40;
                        index++;
                        continue;
                    } else if(s[index + 1] == 'C'){
                        total = total + 90;
                        index++;
                        continue;
                    }
                } else if(s[index] == 'C'){
                    cout << "bl" << endl;
                    if(s[index + 1] == 'D'){
                        total = total + 400;
                        index++;
                        continue;
                    } else if(s[index + 1] == 'M'){
                        total = total + 900;
                        index++;
                        continue;
                    }
                }
            }
            switch(s[index]){
                case 'I':
                    total+= 1;
                    break;
                case 'V' :
                    total+= 5;
                    break;
                case 'X':
                    total+= 10;
                    break;
                case 'L' :
                    total+= 50;
                    break;
                case 'C':
                    total+= 100;
                    break;
                case 'D' :
                    total+= 500;
                    break;
                case 'M':
                    total+= 1000;
                    break;
            }                      
        }
        return total;
    }