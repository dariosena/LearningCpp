// A dynamic size matrix using std::vector for storage.

//-------------------------------------------Machinery:
#include <algorithm>            // std::copy
#include <assert.h>             // assert
#include <initializer_list>     // std::initializer_list
#include <vector>               // std::vector
#include <stddef.h>             // ptrdiff_t

namespace my 
{
    using Size = ptrdiff_t;
    using std::initializer_list;
    using std::vector;
    
    template<class Item> class Matrix
    {
    private:
        vector<Item> items_;
        Size n_cols_;
        
        auto index_for(Size const x, Size const y) const -> Size {
            return y*n_cols_ + x;
        }
    
    public:
        
        auto n_rows() const -> Size {
            return items_.size() / n_cols_;
        }
        
        auto n_cols() const -> Size {
            return n_cols_;
        }
        
        auto item(Size const x, Size const y) -> Item& {
            return items_[index_for(x, y)];
        }
        
        auto item(Size const x, Size const y) const -> Item const& {
            return items_[index_for(x, y)];
        }
        
        Matrix(): n_cols_(0) { }
        
        Matrix(Size const n_cols, Size const n_rows):
                items_(n_cols * n_rows), n_cols_(n_cols) { }

        Matrix(initializer_list < initializer_list<Item>> const& values): 
                items_(), 
                n_cols_(values.size() == 0? 0 : values.begin()->size()) {
            
            for (auto const& row: values) {
                assert(Size(row.size()) == n_cols_);
                items_.insert(items_.end(), row.begin(), row.end());
            }
        }
    };
} // end namespace my

using my::Matrix;

auto some_matrix() -> Matrix<int> {
    return
    {
        {1,2,3,4,5,6,7},
        {8,9,0,1,2,3,4},
        {6,5,4,3,2,8,6}
    };
}

#include <iostream>
#include <iomanip>

using namespace std;

auto main() -> int {
    
    Matrix<int> const m = some_matrix();
    
    assert(m.n_cols() == 7);
    assert(m.n_rows() == 3);
    
    for (int y = 0, y_end = m.n_rows(); y < y_end; ++y) {
        for (int x = 0, x_end = m.n_cols(); x < x_end; ++x) {
            cout << setw(4) << m.item(x, y);
        }
        cout << '\n';
    }
    
}
