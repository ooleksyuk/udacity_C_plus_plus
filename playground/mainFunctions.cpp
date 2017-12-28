/*
 * =====================================================================================
 *
 *       Filename:  mainFunctions.cpp
 *
 *    Description:  All functions that will be used in main
 *
 *        Version:  1.0
 *        Created:  08/30/2017 09:50:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "main.hpp"

void whatPetDoYouLike()
{
  char skin, location;
  std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
  std::cin>>skin;
  std::cout<<skin<<"\n";
  
    //Use if-else statements to control program flow
  if (skin == 't')
    {
    std::cout<<"Get a bird"<<"\n";
    }
  else if (skin == 'f')
    {
    std::cout<<"Get a dog"<<"\n";
    }
  else
    {
    std::cout<<"Get a fish"<<"\n";
    }
  
  
  std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
  std::cin>>location;
  std::cout<<location<<"\n";
  
    //Use if-else statements to control program flow
  if (location == 'b')
    {
    std::cout<<"Get a bird"<<"\n";
    }
  else if (location == 'l')
    {
    std::cout<<"Get a dog"<<"\n";
    }
  else
    {
    std::cout<<"Get a fish"<<"\n";
    }
}

int aOrBSimplified()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
  
  int A = 0;
  int B = 0;
  int C = 0;
  int Q;
  Q = A;
  
    //case 0:
  std::cout<<"A\tB\tC\t\tQ\n";
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 0;
  B = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 1;
  B = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 0;
  B = 0;
  A = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 1;
  B = 0;
  A = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 0;
  B = 1;
  A = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  C = 1;
  B = 1;
  A = 1;
  Q = A;
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";
  
  return 0;
}

int aOrB()
{
  int A = 0;
  int B = 0;
  int C = 0;
  int Q;
  Q = (A && B && C) || (A && (!B || !C));
  
  std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 0;
  B = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 1;
  B = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 0;
  B = 0;
  A = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 1;
  B = 0;
  A = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 0;
  B = 1;
  A = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  C = 1;
  B = 1;
  A = 1;
  Q = (A && B && C) || (A && (!B || !C));
  std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";
  
  return 0;
}

int logicalOperator()
{
  int A = 5;
  int B = 4;
  int C = 5;
  int D = 0;
  
  std::string TorF[] = {"False", "True"};
  
    //The && operator
  std::cout<<"A == C is "<<TorF[A==C];
  std::cout<<"\n(B == D) is "<<TorF[B==D];
  std::cout<<"\n(B > D) is "<<TorF[B>D];
    //A true && false = false
  std::cout<<"\n\n(A == C) && (B == D) is "<<TorF[(A ==C) && (B == D)];
    //A true and true = true
  std::cout<<"\n(A == C) && (B > D) is "<<TorF[(A ==C) && (B > D)];
  
    //The || operator
    //A true || false = true
  std::cout<<"\n\n(A == C) || (B == D) is "<<TorF[(A ==C) || (B == D)];
    //A true || true = true
  std::cout<<"\n(A == C) || (B > D) is "<<TorF[(A ==C) || (B > D)];
  
    //The 'Not' operator
  std::cout<<"\n\nA < B is "<<TorF[A<B];
  std::cout<<"\n!(A < B) is "<<TorF[!(A<B)];
  
  std::cout<<"\n\nA == C is "<<TorF[A==C];
  std::cout<<"\n!(A == C) is "<<TorF[!(A==C)];
  
  return 0;
}

void maxNumber()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;
    
    for(int i = 0; i < 15; i++)
    {
        std::cout << "Enter a number: ";
        scanf("%d", &userInput);
        std::cout << userInput << "\n";
        
        if(userInput > maxNumber)
        {
            //the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        
        if(userInput < minNumber)
        {
            //the lowest number entered so far is the min number
            minNumber = userInput;
        }
        
        sumTotal = sumTotal + userInput;
    }
    
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15;
    std::cout << "Average = " << average << "\n";
}
