#ifndef PERSEGIPANJANG_H
#define PERSEGIPANJANG_H

class PersegiPanjang
{
private:
    float xmin, xmax, ymin, ymax;
    float TitikTengahX, TitikTengahY, Panjang, Lebar;

public:
    PersegiPanjang();
    PersegiPanjang(float TitikTengahX, float TitikTengahY, float Panjang, float Lebar);

    void setTitikTengahX(float TitikTengahX);
	float getTitikTengahX();

    void setTitikTengahY(float TitikTengahY);
	float getTitikTengahY();
    
    void setPanjang(float Panjang);
	float getPanjang();

    void setLebar(float Lebar);
	float getLebar();

    float getxmin();

    float getxmax();

    float getymin();

    float getymax();

    
    bool  operator== (PersegiPanjang const&);
    PersegiPanjang operator+ (const PersegiPanjang&);
    PersegiPanjang operator- (const PersegiPanjang&);  
    void operator++ ();
    void operator-- ();
    float operator[] (int in);

    void hasil();

};

#endif