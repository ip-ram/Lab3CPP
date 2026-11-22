#ifndef MOD_HPP
#define MOD_HPP

#include <string>
#include <vector>
#include <optional>

template <typename OK, typename ERROR>
struct Result {
    private:
        std::optional<OK> ok_;
        std::optional<ERROR> error_;
    public:
        Result();
        Result(OK);
        Result(ERROR);

        OK Unwrap();
};

template <typename T>
Result<std::vector<T>, std::string> split_to_whitespace(std::string string);

template <typename T>
Result<std::vector<T>, std::string> split_to_whitespace(std::string string, int count);
#endif
