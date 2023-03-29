
template <typename T> void swap(T &one, T &two)
{
    T tmp = one;
    one = two;
    two = tmp;
}

template <typename T> T &min(T &one, T &two)
{
    return (one < two ? one : two);
}

template <typename T> T &max(T &one, T &two)
{
    return (one > two ? one : two);
}
