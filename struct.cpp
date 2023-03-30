#include <iostream>
#include <vector>
using namespace std;

class User{
    public:
        string first_name;
        string last_name;
};

int add_user_if_not_exists(vector <User> vector,User user){
    for(int i = 0; i < vector.size();i++){
        if(vector[i].first_name == user.first_name && 
        vector[i].last_name == user.last_name ){
            return i;
        }
    }
    vector.push_back(user);
    return vector.size() - 1;
}


int main(){
    vector <User> v_usuarios;

    User user1,user2,user3,user4,user5;

    user1.first_name = "Asafe";    //index 0 
    user1.last_name = "Brandao";

    user2.first_name = "Isaque";   //index 1
    user2.last_name = "Brandao";

    user3.first_name = "Isabela";  //index 2
    user3.last_name = "Brandao";

    v_usuarios.push_back(user1);
    v_usuarios.push_back(user2);
    v_usuarios.push_back(user3);

    
    user4.first_name = "Gabi";
    user4.last_name = "Brandao";

    user5.first_name = "Asafe";
    user5.last_name = "Brandao";


    cout << add_user_if_not_exists(v_usuarios,user4)<<endl;
    cout << add_user_if_not_exists(v_usuarios,user5)<<endl;
    cout << endl;
    cout << v_usuarios.size() << endl;

    return 0;
}