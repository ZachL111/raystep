#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{52, 54, 10, 49};
    assert(domain_review_score(item) == 177);
    assert(domain_review_lane(item) == "ship");
}
