#define CSTRING 1

typedef char* string;

int strings_equal(string equal, string to) {
    int z = 0;
    if(sizeof(equal) != sizeof(to)) {
        return 1;
    }
    for(int i = 0; i<sizeof(equal); i++) {
        for(int j = 0; i<sizeof(to); i++) {
            if(equal[i] == to[i]) {
                z++;
            }
        }
    }
    return (z == sizeof(equal));
}

string* split(string target, char value) {
    string* ret;
    string current_div;
    int j = 0;
    for(int i = 0; i<sizeof(target); i++) {
        if(target[i] == value) {
            ret[j] = current_div;
            current_div = "";
        }
        else
        {
            current_div += target[i];
        }
        j++;
    }
    return ret;
}