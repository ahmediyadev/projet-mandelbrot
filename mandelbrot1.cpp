#include <iostream>
const float N=10000;
int mandelbrot(float a,float b){
    float a_reel=0.0f;
    float b_im=0.0f;
    int n=0;
    while(a_reel*a_reel+b_im*b_im<4.0f && n<N){
        float a_reel_new=a_reel*a_reel-b_im*b_im+a;
        float b_im_new=2*a_reel*b_im+b;
        a_reel=a_reel_new;
        b_im=b_im_new;
        n++;
    }
    return n;
}
int main() {
    float a,b;
    int iteration=0;
    std::cout << "entrer la partie reel de la constance c" << std::endl;
    std::cin>>a;
    std::cout << "entrer la partie imaginaire de la constance c" << std::endl;
    std::cin>>b;
    iteration=mandelbrot(a,b);
    std::cout << iteration<< std::endl;
    if(iteration<N){
        std::cout<<"error"<< std::endl;
    }else{
        std::cout<<"votre c appartient a l'ensemble de mandelbrot"<< std::endl;
    }
    return 0;
}
