#include<iostream>
#include<cstring>
using namespace std;


//Product (Shopping Website)
class Product{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    //setters
    Product(int id , char *n , int mrp , int selling_price)
    {
        this->id=id;
        strcpy(name , n);
        this->mrp=mrp;
        this->selling_price=selling_price;
    }
    //Es trah se copy constructor banta hai
    Product(Product &X)
    {
        id=X.id;
        strcpy(name , X.name);
        mrp=X.mrp;
        selling_price=X.selling_price;
    }
    void setMrp(int m){
        if(m<0)
        {
            mrp=-m;
        }
        else{
            mrp=m;
        }
    }   

    void setSellingPrice(int sp){
        if(sp > mrp)
        {
            selling_price=mrp;
        }
        else{
            selling_price=sp;
        }
    }
    //getters
    int getMrp(){
        return mrp;
    }   

    int getSellingPrice(){
        return selling_price;
    }

    void showdetails()
    { 
        cout << "Name:" << name << endl;
        cout << "id:" <<  id << endl;
        cout << "Selling Price:" << selling_price << endl;
        cout << "Mrp:" << mrp << endl;
    }
};
int main()
{
    Product camera(1000, "GoPro" , 28000 , 26000);
    camera.showdetails();
    //Copy is made using special constructor -> Copy Constructor
    Product webcam(camera);
    webcam.showdetails();

    //Another way of writing copy constructor
    Product handycam=camera;
    handycam.showdetails();
    // camera.setMrp(-100);
    // camera.setSellingPrice(90);
    // cout << "Mrp:" << camera.getMrp() <<endl;
    // cout << "Selling Price:" << camera.getSellingPrice();
    return 0;
}