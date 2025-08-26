#include <string>
#include <map>

bool issame(const std::map<char, int>& m1, const std::map<char, int>& m2) {
    if (m1.size() != m2.size()) {
        return false;
    }
    for (auto& p : m1) {
        if (m2.find(p.first) == m2.end() || m2.at(p.first) != p.second) {
            return false;
        }
    }
    return true;
}

std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> hist;
    for (char c : str) {
        if (!isspace(c)) {
            hist[tolower(c)]++;
        }
    }
    return hist;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(map<char,int> a,map<char,int> b){
    if (a.size()!=b.size()) return false;
    map <char,int>::iterator it;
    for (it=a.begin();it!=a.end();it++)
    {
        char w1=it->first;
        int w2=it->second;
        if (b.find(w1)==b.end()) return false;
        if (b[w1]!=w2) return false;
    }

    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(histogram("a b b a") , {{'a',2},{'b', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c a b") , {{'a', 2},{'b', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d g") , {{'a', 1}, {'b', 1}, {'c', 1}, {'d', 1}, {'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("r t g") , {{'r', 1},{'t', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("b b b b a") , {{'b', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("r t g") , {{'r', 1},{'t', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("") , {}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a") , {{'a', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b a") , {{'a', 2},{'b', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c a b") , {{'a', 2},{'b', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d g") , {{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("r t g") , {{'r', 1},{'t', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("b b b b a") , {{'b', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("") , {}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a") , {{'a', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x") , {{'x', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a r s") , {{'c', 1},{'a', 1},{'r', 1},{'s', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h e l l o") , {{'l', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p u z z l e") , {{'z', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a a a a b b b b b b b") , {{'a', 7},{'b', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c c c c b b b a a a") , {{'c', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r r r") , {{'p', 3},{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g") , {{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'e', 1},{'f', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m p") , {{'m', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a a a a b b b b b b") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g") , {{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'e', 1},{'f', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l e") , {{'p', 1},{'l', 1},{'e', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p u z l e") , {{'p', 1},{'u', 1},{'z', 1},{'l', 1},{'e', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r r r") , {{'p', 3},{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r r r") , {{'p', 3},{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a a a a b b b b b b") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l e") , {{'p', 1},{'l', 1},{'e', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o o p") , {{'j', 2},{'o', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p r") , {{'p', 1},{'r', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b b") , {{'b', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g") , {{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'e', 1},{'f', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b") , {{'b', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j m m m p") , {{'m', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m p") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o o") , {{'j', 2},{'o', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m p") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a a a a b b b") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p r r r") , {{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o p") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x") , {{'x', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p h i j j k l m o") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c e f g") , {{'a', 1},{'b', 1},{'c', 1},{'e', 1},{'f', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c c c c b b b a a a") , {{'c', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p u z z l e") , {{'z', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e p f g") , {{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'e', 1},{'p', 1},{'f', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b h i j j m m m n o o o o p") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x") , {{'x', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o p") , {{'m', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l h i j j k l m m m p e") , {{'m', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b b") , {{'b', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h e") , {{'h', 1},{'e', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m m m n o o o p") , {{'m', 3},{'o', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l h i j j k l m e") , {{'l', 2},{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r r r p") , {{'p', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p r r r") , {{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c h i j j k l m o d e p f g") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p u z z e") , {{'z', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p u z z e") , {{'z', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p u z z l e") , {{'z', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("s") , {{'s', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k h i j j k l m o o p p p p r r r m m n o o o o p") , {{'o', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j m m m p") , {{'m', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l h i j j k l m e") , {{'l', 2},{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p r h i j j k l m m m n o o o o p r") , {{'o', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b b b") , {{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j p p r r r j k l m") , {{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c c c c b b a a") , {{'c', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r r r") , {{'p', 3},{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("r") , {{'r', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b b b") , {{'b', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j m m m") , {{'m', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k l m o") , {{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i j j k h i j j k l m o o p p p p r r r m m n o o o o p") , {{'o', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a a a a b b b b") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r r r") , {{'p', 3},{'r', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l h i j j k l m e") , {{'l', 2},{'j', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p p r h i j j p p p r r r p k l m m m n o o o o p r u z z e") , {{'p', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g") , {{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'e', 1},{'f', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a p h i j j k l m o a a a a a b b b b b b") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a a a a b b b b b b") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p") , {{'p', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p l e") , {{'p', 1},{'l', 1},{'e', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h i p p r h i j j k l m o o r r j k l m") , {{'r', 3},{'j', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v w w x x y y z z") , {{'q', 3},{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g") , {{'a', 3},{'b', 3},{'c', 3},{'d', 3},{'e', 3},{'f', 3},{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h") , {{'h', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l") , {{'l', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d") , {{'d', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("u") , {{'u', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("b") , {{'b', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p") , {{'p', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("z") , {{'z', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s a a a a b b d d d d f f f g h i s s s s s t t t t t t t t u v w") , {{'d', 8},{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g") , {{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("s") , {{'s', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c") , {{'c', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("n") , {{'n', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("v") , {{'v', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("f") , {{'f', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y a a a a b b d d d d f f f g h i y y y y z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("i") , {{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("t") , {{'t', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o") , {{'o', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("m") , {{'m', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("w") , {{'w', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x") , {{'x', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("r") , {{'r', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("j") , {{'j', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v s x x x x y a a a a b b d d d d f f f g h i y y y y z z z z z") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("e") , {{'e', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a b k k l l t t t t t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y x y z x") , {{'x', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n p p q q r r s") , {{'n', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("k") , {{'k', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z s s s s s s s t t t t t t t t u v w") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("y") , {{'y', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a a a b b d d d d f f f g h i") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x") , {{'x', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a a a b b d d d d f f f g h i") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a b b d d d d f f f g h i") , {{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z e y z x") , {{'x', 7},{'y', 7},{'z', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z z z z y z e y z x") , {{'x', 10},{'y', 10},{'z', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x y y z z") , {{'x', 2},{'y', 2},{'z', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y s s t t t t t") , {{'t', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x z x y z x y z x") , {{'x', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 28}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v w w x x y y z z") , {{'q', 3},{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f a g g h a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 21}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x j a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y a a a a b b d d d d f f f g h i p y y y y z z z z z") , {{'p', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g l m n o p q r r r s s s s s s s t t t t t t t t a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z v w") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h l a a a a b b d d d d f f f g h i h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m t t t u v w") , {{'i', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'t', 27}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x") , {{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x z x y z x y z x z x y z x y z x y z x") , {{'x', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a b k k l l t t t t t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t t t u v w x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a a a b b d d d d f f f g h i x y z") , {{'t', 17}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y a b k k l l t t t t t t u v w x y z z x y z x y z x y z x y z x y z x") , {{'x', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b f f g h i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z e y z") , {{'y', 7},{'z', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a i a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z z x y z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l f f f g h i") , {{'f', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z z z z") , {{'s', 31}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z s s s s s t t t t t t t t u v w") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t l a a a a b b d d d d f f f g h i t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y a b k k l l t t t t t t u v w x y z z x y z x y z x y z x y z x y z x") , {{'x', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z z z z y z e y z x") , {{'x', 10},{'y', 10},{'z', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a a a a b b d d d d f f f g h i") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x j a b c d e f a g g h h h j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g m n o p q r r r s s s s s s s t t t t t t t t u v w x y z y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'s', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x j a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b f f g h i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d f g h i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t a b k k l l t t t t l a a a a b b d d d d f f f g h i t t u v w x y z t t t t u v w x y z") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b f f g i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a a a b b d d d d f f f g h i a a b b d d d d f f f g h i") , {{'s', 26}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'t', 27}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b f f g i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x a b c d e f a g g h h x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t t t u v w x y z") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t u v w") , {{'s', 7},{'t', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'t', 27}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i a b s s t t t t t t t t u v w x y z j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'t', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s a a a a b b x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x s s s s s s t t t t t t t t u v w") , {{'a', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t") , {{'s', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s s t t t t t") , {{'s', 19},{'t', 19}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t") , {{'s', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s x a b c d e f a g g h h h h i j j j k k k k l l l l a a a a b b f f g i l m n o p q r r r s s s s s s s t t t t s s s t t t t t t u u u u u u v v v l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a b b d d d d f f x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a a a b b d d d d f f f g h i a a b b d d d d f f f g h i f g h i") , {{'s', 26}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z u x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b a b k k l l t t t t t t u v w x y z f f g h i") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g a a a a b b x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x i i i i i j j j j k k k k l l l l m t t t u v w") , {{'a', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s s t t t t t z z z z z y z e y z x") , {{'s', 25},{'t', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y a b k k l l t t t t t t u v w x y z z x y z x y z x y z x y z x y z a b k k l l t t t t t t u v w x y z") , {{'t', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x t t t t t") , {{'t', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x") , {{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g m n o p q r r r s s s s s s s t t t t t t t t u v w x y z y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'s', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a a a a b x t t t t t b d d d d f f f g h i") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l f f f g h i") , {{'f', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t z x y z x y z x y z z x y z x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s s t t t t t") , {{'s', 19},{'t', 19}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'t', 27}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b a b k k l l t t t t t t u v w x y z f f g h i") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("h x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'t', 27}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x") , {{'x', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o u u u v v v v v v w w w w w w x x x z z") , {{'v', 6},{'w', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x z x y z x y z x z x y z x y z x") , {{'x', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q s t u v w x y z a b c d e f g m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z z z z y z e y z x") , {{'x', 10},{'y', 10},{'z', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x z x") , {{'x', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z z e y z x") , {{'z', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t v v v v v w w w w w w x x x x x x y y y y y z z z z z y z e y z x") , {{'x', 10},{'y', 10},{'z', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("s a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'s', 8},{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'y', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l l t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a f f g h i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z a a a a b b x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x x y z x y z x") , {{'x', 18}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t v v v v v w w w w w w x x x x x x y y y y y z z z z z y z e y z x") , {{'x', 10},{'y', 10},{'z', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a c a a a a i a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z h i") , {{'a', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s y y z z") , {{'q', 3},{'r', 3},{'s', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x") , {{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t x x y y z z z z z a g g h h h h i j j j k k k k l l n o p q r r s s s s s s s t t t t t") , {{'s', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t a a a b b d f g h i") , {{'s', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x x y z x y z x") , {{'x', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t l a a a a b x y z x y z x y z x y z x y z x y z e y z u v w x y z") , {{'y', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l s t t t t t") , {{'t', 19}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t l a a a a b x y z x y z u v w x y z") , {{'a', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t t l a a a a b x y z x y z x y z x y z x y z x y y z") , {{'y', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x") , {{'x', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t") , {{'s', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b a b k k l l t t t t t t u v w a b k k l l t t t t l a a a a b x y z x y z x y z x y z x y z x y z e y z u v w x y z x y z f f g h i") , {{'a', 10},{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x l a a a a b b d d d d f f f g h i y z x y z x y x y z x") , {{'x', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t a b k k l l t t t t t t u v w x y z t u v w x y z t t t a a a b b d f g h i") , {{'t', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z s s s s u v w") , {{'s', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l s t t t t t k l l t t t t t t u v w x y z") , {{'t', 25}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s y z x") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o u u u v v v v v v w w w w w") , {{'v', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p s t t t u u u v v w w x x y y z z") , {{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g m n o p q r r r s s s s s s s t t t t t t t t u v w x y z y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'s', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z y z x y z x y z x y z x y z x y z u x") , {{'x', 9},{'y', 9},{'z', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l s t t t t t") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y a b k k l l t t t t t t u v w x y z z x y z x y z x y z x y z x y z x") , {{'x', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l f f f g h i") , {{'f', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s x a b c d e f a g g h h h h i a b s s t t t t t t t t u v w x y z j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v z") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g a a a a b b x y z x y z x y z l a a a a b b d d d d f f f g h i x y z x y z x y z x y z x y z x i i i i i j j j j k k k k l l l l m t t t u v w a a a a b b a b k k l l t t t t t t u v w x y z f f g h i") , {{'a', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b f f g x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w i") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x") , {{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o p q r r r s s s s s s s v w x y z") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g m n o x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v a b a b s s s s s t t t t t t t t u v w x y z k k l s t t t t t p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 29}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o v w w w w w w x x h i") , {{'w', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x t t t t t") , {{'t', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l l l m n o t t t t u v w x y z") , {{'l', 4},{'t', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p r r r s s s s s s t t t t t t u u u u u u v v v v v z") , {{'o', 6},{'s', 6},{'t', 6},{'u', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s t t t t t") , {{'h', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t") , {{'s', 13}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x a b c d e f a g g h h h i j a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g m n o p q r r r s s s s s s s t t t t t t t t u v w x y z y z x a b c d e f a g g h h h h i j j j k k k k l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'s', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b f f g") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x") , {{'x', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a b b a b k k l l t t t t t t u v w x y z f f g h i") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r u v w") , {{'i', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o a b k k l l t t t t t t u v w x y z p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r s s s s s s s t t t t t a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t") , {{'s', 33}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z") , {{'x', 5},{'y', 5},{'z', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t t t x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w") , {{'s', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d f g h i") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x t t t t") , {{'t', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p s t t t u u u v x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t v w w x x y y z z") , {{'s', 14},{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l a a a a") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b k k l l t t t z") , {{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p s t t t u u u v x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u q r r r s s s s s s s t t t t t v w w x x y y z z") , {{'s', 14},{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b a b s s s s s t t t t t t t t u v w x y z a b s s s s s t t t t t t t t u v w x y z k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 24}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x x y z x y z x y z x y z x") , {{'x', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l p p q q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("t a b k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i a b c d e f a g g h h h i j j j k k a b k k l l t t t t t t u v w x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x y y z z z z z a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t a a a a b b d d d d f f f g h i x y z o p q r r r s s s s s t t t t t") , {{'t', 22}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x z x y z x y x") , {{'x', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t x y z x") , {{'x', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z z x y z x y z x") , {{'x', 8},{'z', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a b b c c d d") , {{'a', 2},{'b', 2},{'c', 2},{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x x x x") , {{'x', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d a b c d a b c d") , {{'a', 3},{'b', 3},{'c', 3},{'d', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a") , {{'a', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g h i") , {{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s y y y z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t t t t u v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c g h i") , {{'c', 1},{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o t x a b c d e f a g g t t") , {{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a b c d e f a g g t t") , {{'b', 2},{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t u v w") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("q") , {{'q', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o t x t a b c d e f a g g t t") , {{'t', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h i e") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s x a b c d e f a g g t t s s y y y z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h i x a b c d e f a g g t t") , {{'a', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f z b c d e f g") , {{'b', 2},{'c', 2},{'d', 2},{'e', 2},{'f', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n m n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a b c d e f a t t") , {{'b', 2},{'a', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f e a g g t t") , {{'a', 2},{'e', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p v w x y") , {{'l', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o t x a b c d e f a g g t t") , {{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g x b a b c d e f a t t h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g") , {{'a', 5},{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m p p q q r r s") , {{'m', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n p q r r r s s s s s s s t z t t t u v w") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t u v w") , {{'t', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g g h i") , {{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o b a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v g g h i w w x x y y z z") , {{'q', 3},{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i") , {{'d', 1},{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o b a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p x x x x y y y y y z z") , {{'o', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z") , {{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r z z") , {{'o', 6},{'p', 6},{'q', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z") , {{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u x x y y z z") , {{'r', 3},{'s', 3},{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t a b c d e f a g g h h h i j j j k k k l l l l m n o a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y p q r r r s s s s s s s t t t t t t t t u v w x y z t t t u v w") , {{'t', 24}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a b c d e f a g g t t") , {{'b', 2},{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a z s s t t t t t t u u z z z z z d e f a t t") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j o o o o a a a a b b d d d d f f f a a a a b b d d d d f f f g h i w x y z") , {{'a', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f t") , {{'x', 1},{'a', 1},{'b', 1},{'c', 1},{'d', 1},{'e', 1},{'f', 1},{'t', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a t t") , {{'a', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o o o a a a a b b d d d d f f f g h i x a b c d e f a z s s t t t t t t u u z z z z z d e f a t t r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i d") , {{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p s s s s y y y z z z z z") , {{'o', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c d e f a g g t") , {{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r a b s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z r r r s s s s s s t t t t t t u u u z z z z z") , {{'t', 22}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m o t x t a b c d e f a g g t t m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a g g t") , {{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v w w x x y y z z") , {{'q', 3},{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y y z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m p p q q r r s") , {{'m', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v x x x x y y y y y z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("b c d e f a g g t t") , {{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g h h h i j j j o o o o a a a a b b d d d d f f f a a a a b b d d d d f f f g h i w x y z a b c d e f a g g t t") , {{'a', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i d") , {{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a g g t") , {{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t u v w") , {{'t', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b f f g h i e") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t v a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z") , {{'t', 16}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x o o o o a a a a b b d d d d f f f g h i x a b c d e f a z s s t t t t t t u u z z z z z d e f a t t a b c d e f a g g t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g h i") , {{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s t t t t t") , {{'t', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a t t") , {{'a', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a e") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t t t t v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h o o o o o o p p p p p p q q q q q q r r r a b s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z r r r s s s s s s t t t t t t u u u z z z z z") , {{'t', 22}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a g g x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q r r z z") , {{'o', 6},{'p', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f g a g g t t") , {{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("b c d e f a g g g t t") , {{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w a a a a b b f f g h i e w x x y y z z") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a x a b c d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t t t t v a a a a b b d d d d f f f g h o o o o o o p p p p p p q q q q q q r r r a b s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z r r r s s s s s s t t t t t t u u u z z z z z w") , {{'t', 30}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b x b a a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t d d d d f f f g h i") , {{'a', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z") , {{'t', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b f a g g h h x a g g t h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b f a g g h h x a g g t h i j j x a b c d e f a g g t t j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d t t") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h i e") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a c a a a a b b d d d d f f f g h i g h i f a g g t t") , {{'a', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v d e f g") , {{'d', 3},{'e', 3},{'f', 3},{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p x x a a a a e x x y y y y y z z") , {{'o', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f a g g t t") , {{'a', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x a g g t a b c d e f a g g t") , {{'g', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i") , {{'d', 1},{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a e") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m o t x t a b c d e f a g g t t m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h x a g g t r r r s s s s s s t t t t t t u u z z z z z") , {{'t', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t t t t v w a b c d e f a g g t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r z z") , {{'o', 6},{'a', 6},{'p', 6},{'q', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g g h i x x a b c d e f a g g t t c d e f a g g t t") , {{'g', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p x a b c d e f t p p q q q q q q r r r r r r s s s s s s t t t t t p p q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i t u u u z z z z z") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g x b a b c d e f a t t h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g") , {{'a', 5},{'b', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q a a a d d d f f f g h i") , {{'a', 3},{'d', 3},{'f', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b x b a a a a a b b d d d d f f f g h a b r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t d d d d f f f g h i") , {{'a', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t z z z d e f a t t") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t u u z z z z z a b c d e f e a g g y t t") , {{'t', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d t t t u v w x y") , {{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a z s s t t t t t t u u z z z z z d e f a t t") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("n a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b f f g h i e") , {{'a', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z z z z") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r x b a b c d e f a t t r r r r r s s s s s s t t t t t t u u u z z z z z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i") , {{'d', 1},{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d x a b c d e f a g g t t g h i") , {{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p x a b c d e f t p p q q q q q q r r r r r r s s s s s s t t t t t p p q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i t u u u z z z z z") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v g g h i w w x x y y z z") , {{'q', 3},{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a a g g t t o o p p p p p p q q q q q q r r z z") , {{'a', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p x x a a a a e x x y y y y y z z") , {{'o', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i l m m m o t x t a b c d e f a g g t t m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s x a b c d e f a z s s t t t t t t u u z z z z z d e f a t t") , {{'t', 18}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c x b a a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t d e f a g g t t o o p p p p p p q q q q q q r r z z") , {{'a', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t a b c d t t t u v w x y v w x y z") , {{'s', 7},{'t', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z x a b c d e f a g g t") , {{'t', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a a a a a b b d d d d f f t t t t t t t u v w x y b c d e f a g g t t") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c j d e f a g g h h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x f a g g t") , {{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m p p q q r s") , {{'m', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v g g h i a b f a g g h h x a g g t h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y w w x x y y z z") , {{'t', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f z z d e f a t t") , {{'a', 6},{'d', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n p q r r o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v x x x x y y y y y z z z t t t u v w") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a b c d e f a g g t t") , {{'b', 2},{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x b a b c d e f a t t a b c d e f a g g t t") , {{'a', 4},{'t', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q q r r r s s s t t t u u u v v g g h i w w x x y y z z") , {{'q', 3},{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m a a a a b b d d d d f f f g h o o o o o o p p p p p p q q q q q q r r r a b s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z r r r s s s s s s t t t t t t u u u z z z z z m p p q q r s") , {{'t', 22}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("n a b c d e f a g g l") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c j d e f a g g h h h i j j j k k k k l l l l m n o p q r r r s s s s s s s t t t t t") , {{'s', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m p p q q r s x a b c d e f a g g t") , {{'m', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v d e f g a b c d e f a g g t t") , {{'g', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g t") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m o t x t a b c d e f a g g t t m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u a b f a g g h h x a g g t h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y z z z z z q r r s") , {{'t', 19}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i d") , {{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m n n n o o p p q o o o o o o p p p p q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s") , {{'o', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a b c d e f a g t t") , {{'b', 2},{'a', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z") , {{'t', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z x a b c d e f a g g t a g g t") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s o o o o a a a a b b d d d d f f f g h i x a b c d e f a a g g t t o o p p p p p p q q q q q q r r z z s s t t t t t t t t u v w x y z") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z") , {{'r', 3},{'s', 3},{'t', 3},{'u', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f g a g g t") , {{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g") , {{'d', 1},{'g', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i d") , {{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t t t t v w") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g h i t") , {{'g', 1},{'h', 1},{'i', 1},{'t', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u x x y y z z") , {{'r', 3},{'s', 3},{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("n a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s x b a a a a a b b d d d d f f f g h a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t t t t t t u u z z z z z") , {{'t', 17}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z x x a b c d e f a g g t") , {{'x', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y f f g h i e") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t u u z z z z z a b c d e f e a g g y t") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a z s s t t t t t t u u z z z z z d e f a t t") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f z b c d e f g") , {{'b', 2},{'c', 2},{'d', 2},{'e', 2},{'f', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p v w x y") , {{'l', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r z z") , {{'o', 6},{'a', 6},{'p', 6},{'q', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m o t x t a b c d e f a g g t t m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u w x y z z z z z q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a g g x a b c d e f a g g h h h h i j j j k k k k l s s s s t t") , {{'g', 4},{'h', 4},{'k', 4},{'s', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z x a b c d e f a g g t") , {{'t', 7}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l l l l m q r r r s s s s s s s t t t t t t t t v w a b c d e f a g g t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s t u v w x y z") , {{'l', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("b c d e f a g g g t t") , {{'g', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s y z") , {{'s', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i a b f a g g h h x a g g t h i j j x a b c d e f a g g t t j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a b c d e f a g g h h h i j j j k k k l l l l m n o p v w x y b c d e f a g g t t") , {{'a', 4},{'g', 4},{'l', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a a a a b b d d d d f f f g h o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v") , {{'t', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x b a b c d e f a g g t t") , {{'b', 2},{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g h i") , {{'g', 1},{'h', 1},{'i', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g x b i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g") , {{'b', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p x a g g x a b c d e f a g g h h h h i j j j k k k k l s s s s t t a t t") , {{'a', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n n n n n n n n n n n n n n o o p p q p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d x x b a b c d e f a t t a b c d e f a g g t t") , {{'a', 4},{'t', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z x y a a a b b d d d d f f f g h i i i i i j j j j k k k k l l l l m n p q r r r s s s s s s s t t t t t a b c d e f a g g h h j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z t t t u v w") , {{'t', 22}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("c a a a a b b x b a a a a a b b d d d d f f f g h a b r s s s s s s s t t t t t t t t u v w x y b c d e f a g g t t d d d d f f f g h i") , {{'a', 11}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m p m p q q r s") , {{'m', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b t t t t t u v w x y a g g t") , {{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s o o o o o o p p p p p p q q q q q q r r r z z s t t t t t t u u z z z z z") , {{'o', 12},{'p', 12},{'q', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i d l") , {{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t a b c d e f a g g h h h i j j j k k k l a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z t t t t t u v w x y z") , {{'t', 20}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t") , {{'a', 2},{'g', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y h") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g a a a a b b d d d d f f f g h i e h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a a b c d e f t") , {{'a', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("t") , {{'t', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o t x a b c d e f t t") , {{'t', 3}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g x b d g h i d c d e f a t t h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g") , {{'d', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m o t x t a b c d e f a g g t t m m m m m n n n n n n n n n n n n n n o o p p q o o o o o p p p p p p q q q q q q r r r r r s s s s s s t t t t t t u u z z z z z q r s") , {{'n', 14}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t a a a") , {{'a', 10},{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("s a b c d e f a g g h h h i j j j k k k l l l l m n o p v w x y") , {{'l', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o a a a a b b d d d d f f d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m p p q o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t z z r s") , {{'p', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l x b a b c d e f a g g t t l l l m n p q r r r s s s s s s s t t t t t t t t v w") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("l m m m m m m m m n o q q r r s") , {{'m', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x x g a g g t a b c d e f a g g t") , {{'g', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o d a a a a b b d d d d f f f g h i x a b c d e f a g g t t o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u z z z z z d e f a t t") , {{'t', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a g g t t") , {{'a', 2},{'g', 2},{'t', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y z x y z x y z x y z x y z x y z x y z x y z x x a b c d e f a g g t") , {{'x', 10}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r x b a b c d e f a t t u z z z z z") , {{'o', 6},{'p', 6},{'q', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("e c d e f a g g t a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z") , {{'t', 17}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x e c d e f a g g t a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t a a a a b b d d d d f f f g h a b c d j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y t t t t u v w x y z a b c d e f a g g t") , {{'t', 18}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o t x t a b c d e f a g g t t") , {{'t', 4}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g x a b c d e f a g g t h i j k l m n o p q r s t u v w x y z a b c d e f g") , {{'a', 5},{'g', 5}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u z z z z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r s s s s t t t z z") , {{'o', 6},{'p', 6},{'q', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s o o o o o o p p p p p p q q q q q q r r r z z s t t t z z z z") , {{'o', 12},{'p', 12},{'q', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("o o o o o o p p p p p p q q q q q q r r r r r r s s s s s s t t t t t t u u u u u u v v v v v v w w w w w w x x x x x x y y y y z z") , {{'o', 6},{'p', 6},{'q', 6},{'r', 6},{'s', 6},{'t', 6},{'u', 6},{'v', 6},{'w', 6},{'x', 6}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s s s s s t t t t t t t t u v w x y z") , {{'t', 8}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("d g h i d") , {{'d', 2}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("g h") , {{'g', 1},{'h', 1}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x a b c d e f a b c d e f a g g h h h i j j j k k k l l l l m n o p q r r r s s s t t t t t t t t u v w x y g a g g t") , {{'t', 9}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("x y a a a b b d d j j j j k k k k l x b a b c d e f a g g o o o o o o p p p p p p q q q q q q r r r r r r s s s x a b c d e f a g g t t s s y y y z z z z z t t l l l m n p q r r r s s s s s s s t t t t t t t t v w") , {{'s', 12},{'t', 12}}))){ tests_passed++; } total_tests++;

    if((issame(histogram("p p q q r r r s s s t t t u u u v v w w x x y y z z a a a a b b d d d d f f f g h i") , {{'a', 4},{'d', 4}}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


