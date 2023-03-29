template <typename T> typename T::iterator easyfind(T &data, int i)
{
    typename T::iterator it;
    it = find(data.begin(), data.end(), i);
    return (it != data.end() ? it : throw 1);
}