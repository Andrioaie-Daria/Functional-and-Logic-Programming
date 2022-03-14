#include "lista.h"
#include <iostream>

using namespace std;


PNod creare_rec(){
  TElem x;
  cout<<"x=";
  cin>>x;
  if (x==0)
    return NULL;
  else{
    PNod p=new Nod();
    p->e=x;
    p->urm=creare_rec();
    return p;
  }
}

Lista creare(){
   Lista l;
   l._prim=creare_rec();
}

void tipar_rec(PNod p){
   if (p!=NULL){
     cout<<p->e<<" ";
     tipar_rec(p->urm);
   }
}

void tipar(Lista l){
   tipar_rec(l._prim);
   cout<<endl;
}

void distrug_rec(PNod p){
   if (p!=NULL){
     distrug_rec(p->urm);
     delete p;
   }
}

void distruge(Lista l) {
	//se elibereaza memoria alocata nodurilor listei
    distrug_rec(l._prim);
}


int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int lowestCommonMultiple(PNod head)
{
    if(head == nullptr){
        return 1;
    }
    int lowestCommonMultipleOfNextElements = lowestCommonMultiple(head->urm);
    return (head->e * lowestCommonMultipleOfNextElements)/gcd(head->e, lowestCommonMultipleOfNextElements);
}


void substituteOccurrences(PNod head, TElem value, TElem otherValue){
    if(head == nullptr){
        return;
    }
    if(head->e == value){
        head->e = otherValue;
    }
    substituteOccurrences(head->urm, value, otherValue);
}