#include <iostream>
#include "include/PersegiPanjang.h"

using namespace std;

PersegiPanjang::PersegiPanjang(float TitikTengahX, float TitikTengahY, float Panjang, float Lebar)
                : TitikTengahX(TitikTengahX), TitikTengahY(TitikTengahY), Panjang(Panjang), Lebar(Lebar)
{
    this->xmin = TitikTengahX - (Panjang/2);

    this->xmax = TitikTengahX + (Panjang/2);

    this->ymin = TitikTengahY - (Lebar/2);

    this->ymax = TitikTengahY + (Lebar/2);
}

void PersegiPanjang::setTitikTengahX(float TitikTengahX)
{
	this->TitikTengahX = TitikTengahX;
}

float PersegiPanjang::getTitikTengahX() 
{
	return this->TitikTengahX;
}

void PersegiPanjang::setTitikTengahY(float TitikTengahY)
{
	this->TitikTengahY = TitikTengahY;
}

float PersegiPanjang::getTitikTengahY() 
{
	return this->TitikTengahY;
}

void PersegiPanjang::setPanjang(float Panjang)
{
    this->Panjang = Panjang;
}

float PersegiPanjang::getPanjang() 
{
    return this->Panjang;
}

void PersegiPanjang::setLebar(float Lebar)
{  
    this->Lebar = Lebar;
}

float PersegiPanjang::getLebar() 
{
    return this->Lebar;
}

bool PersegiPanjang::operator==(const PersegiPanjang &next)
{
    if(this->xmax > next.xmin && this->xmin < next.xmax && this->ymin < next.ymax && this->ymax > next.ymin)
    {
        return true;
    }
    else
    {
        return false;
    }
}

PersegiPanjang PersegiPanjang::operator+  (const PersegiPanjang &next)
{
    PersegiPanjang big(0,0,0,0);
    
    if(*this == next)
    {
        big.xmin=min(this->xmin, next.xmin);
        big.xmax=max(this->xmax, next.xmax);
        big.ymin=min(this->ymin, next.ymin);
        big.ymax=max(this->ymax, next.ymax);
    }
    return big;
}

PersegiPanjang PersegiPanjang::operator- (const PersegiPanjang &next)
{
    PersegiPanjang irisan(0,0,0,0);
    if(*this == next)
    {
        irisan.xmin=max(this->xmin, next.xmin);
        irisan.xmax=min(this->xmax, next.xmax);
        irisan.ymin=max(this->ymin, next.ymin);
        irisan.ymax=min(this->ymax, next.ymax);
    }
    return irisan;
    
}

void PersegiPanjang::operator++()
{
    Panjang = (this->xmax - this->xmin)*2;
    Lebar = (this->ymax - this->ymin)*2;
    this->xmin = TitikTengahX - (Panjang/2);
    this->xmax = TitikTengahX + (Panjang/2);
    this->ymin = TitikTengahY - (Lebar/2);
    this->ymax = TitikTengahY + (Lebar/2);
}

void PersegiPanjang::operator--()
{
    Panjang  = (this->xmax - this->xmin)/2;
    Lebar = (this->ymax - this->ymin)/2;
    this->xmin = TitikTengahX - (Panjang/2);
    this->xmax = TitikTengahX + (Panjang/2);
    this->ymin = TitikTengahY - (Lebar/2);
    this->ymax = TitikTengahY + (Lebar/2);
}

void PersegiPanjang::hasil()
{
    cout << "Panjang            : " << this->xmax - this->xmin << endl;
    cout << "Lebar              : " << this->ymax - this->ymin << endl;
    cout << "Titik Tengah X     : " << (this->xmax - this->xmin)/2 + xmin << endl;
    cout << "Titik Tengah Y     : " << (this->ymax - this->ymin)/2 + ymin << endl;
    cout << "X Max              : " << this->xmax << endl;
    cout << "X Min              : " << this->xmin << endl;
    cout << "Y Max              : " << this->ymax << endl;
    cout << "Y Min              : " << this->ymin << endl;
}

float PersegiPanjang::operator[](int in)
{
   int i = in%4;
   if(i==0)
   {
       return this->xmin;
   }
   else if(i==1)
   {
       return this->xmax;
   }
   else if (i==2)
   {
       return this->ymin;
   }
   else if (i==3){
       return this->ymax;
   }
}


