#include <bits/stdc++.h>
using namespace std;
void max_heap_insertion(vector<int> &v)
{
    int x;
    cin >> x;
    v.push_back(x);
    int current_index = v.size() - 1;

    while (current_index != 0)
    {
        int parent = (current_index - 1) / 2;
        if (v[parent] < v[current_index])
            swap(v[parent], v[current_index]);
        else
            break;
        current_index = parent;
    }
}
void min_heap_insertion(vector<int> &v)
{
    int x;
    cin >> x;
    v.push_back(x);
    int current_index = v.size() - 1;

    while (current_index != 0)
    {
        int parent = (current_index - 1) / 2;
        if (v[parent] > v[current_index])
            swap(v[parent], v[current_index]);
        else
            break;
        current_index = parent;
    }
}
void delete_maxHeap_root(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int l = cur * 2 + 1;
        int r = cur * 2 + 2;
        int x = v.size() - 1;
        if (l <= x && r <= x)
        {
            if (v[l] >= v[r] && v[l] > v[cur])
            {
                swap(v[cur], v[l]);
                cur = l;
            }
           else if (v[r] >= v[l] && v[r] > v[cur])
            {
                swap(v[cur], v[r]);
                cur = r;
            }
            else
                break;
        }
        else if (l <=    x)
        {
            if (v[l] > v[cur])
            {
                swap(v[cur], v[l]);
                cur = l;
            }
            else
                break;
        }
        else if (r <= x)
        {
            if (v[r] > v[cur])
            {
                swap(v[cur], v[r]);
                cur = r;
            }
            else
                break;
        }
        else
            break;
    }
}
void print_heap(vector<int> v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
        max_heap_insertion(v);
    // delete_maxHeap_root(v);
    print_heap(v);
    delete_maxHeap_root(v);
    print_heap(v);
        delete_maxHeap_root(v);

    return 0;
}