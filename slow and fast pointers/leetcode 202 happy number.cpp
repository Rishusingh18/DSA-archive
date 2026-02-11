class Solution {
public:
    int nextNumber(int n) {
        int sum = 0;
        while(n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while (true) {
            slow = nextNumber(slow);            // move 1 step
            fast = nextNumber(nextNumber(fast)); // move 2 steps

            if (fast == 1) return true;         // reached happy
            if (slow == fast) return false;     // cycle detected
        }
    }
};
