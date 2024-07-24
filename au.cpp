    class OrderProcessor {
    private:
        int c;
        std::vector<int> orders;
    public:
        OrderProcessor(int coefficient, const std::vector<int>& orderList)
            : c(coefficient), orders(orderList) {}

        int multiplyOrder(int i) {
            if (i >= 0 && i < orders.size()) {
                return c * orders[i];
            } else {
                throw std::out_of_range("Index out of range");
            }
        }
    };
    