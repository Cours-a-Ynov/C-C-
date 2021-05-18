void modify(float c){
    c = 5.0f;
}

int fun(float a){
    modify(a);
    return 0;
}

int main(int argc, char** argv){
    float b = 3.5f;
    fun(b);
    return 0;
}