#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{53, 93, 10, 5, 4};
    assert(score_signal(signal_case_1) == 171);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{88, 76, 22, 25, 8};
    assert(score_signal(signal_case_2) == 132);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{72, 83, 16, 9, 9};
    assert(score_signal(signal_case_3) == 186);
    assert(classify_signal(signal_case_3) == "accept");
}
