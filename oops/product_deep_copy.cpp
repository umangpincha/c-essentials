#include<iostream>
#include<cstring>
using namespace std;


//Product (Shopping Website)
class Product{
private:
    int id;
    char *name;
    int mrp;
    int selling_price;
public:
    //setters
    Product(int id , char *n , int mrp , int selling_price)
    {
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        name= new char[strlen(n)+1];
        strcpy(name , n);
    }
    //Es trah se copy constructor banta hai
    Product(Product &X)
    {
        id=X.id;
        name= new char[strlen(X.name)+1];
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

    // setter for name
    void setName(char *name){
        strcpy(this->name , name);
    }
    void showdetails()
    { 
        cout << "Name:" << name << endl;
        cout << "id:" <<  id << endl;
        cout << "Selling Price:" << selling_price << endl;
        cout << "Mrp:" << mrp << endl;
    }
    ~Product(){
        cout << "Deleting " << name<<endl;
        if(name!=NULL)
        {
            delete[] name;
            name=NULL;
        }
    }
};
int main()
{
    Product camera(1000, "GoPro9" , 28000 , 26000);
    Product old_camera(camera);
    old_camera.setName("GoPro8");
    old_camera.setMrp(1000);
    camera.showdetails();
    old_camera.showdetails();
    return 0; 
}