#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std;

void display(string value)
{
    cout << value << ' ';
}

bool sort_descending(int a, int b)
{
    return a > b;
}

int total_even(int accumulator, int current_val)
{
    if (current_val % 2 == 0)
        accumulator += current_val;

    return accumulator;
}

bool sort_string_descending(string a, string b)
{
    return a > b;
}

bool sort_by_length(string a, string b)
{
    return b.size() > a.size();
}


int main()
{
    cout << "STL Algorithm Practice\n";
    cout << "======================\n\n";


    vector<double> nums { 6.0, 4.5, 34.1, 6.7, 6 };

    int c = count(nums.begin(), nums.end(), 6);

    cout << "count algorithm\n";
    cout << "Number of 6s: " << c << endl;
    cout << endl;


    set<string> states { "OR", "WA", "CA", "AK", "HI" };

    cout << "States: ";

    for_each(states.begin(), states.end(), display);

    cout << endl;
    cout << endl;

    list<int> target { 1, 2, 3, 4, 5 };

    auto iter = find(target.begin(), target.end(), 3);

    cout << "find algorithm\n";

    if (iter == target.end())
    {
        cout << "Not Found!\n";
    }
    else
    {
        cout << "Value Found!\n";
    }

    cout << endl;

    vector<int> target2 { 1, 2, 3, 4, 5 };
    set<int> to_find { 3, 4, 5, 6 };

    auto search_iter = search(
        target2.begin(),
        target2.end(),
        to_find.begin(),
        to_find.end()
    );

    cout << "search algorithm\n";

    if (search_iter == target2.end())
    {
        cout << "Not Found!\n";
    }
    else
    {
        cout << "Found!\n";
    }

    cout << endl;

    string cc_number = "4012-881022-88810";

    replace(cc_number.begin(), cc_number.end(), '-', ' ');

    cout << "replace algorithm\n";
    cout << cc_number << endl;
    cout << endl;

    vector<int> scores { 89, 34, 78, 100, 45, 68, 92 };

    fill(scores.begin(), scores.end(), 0);

    cout << "Scores: ";

    for (int score : scores)
    {
        cout << score << ' ';
    }

    cout << endl;
    cout << endl;

    list<int> numbers_list { 1, 4, 5, 2, 3, 1 };

    vector<int> numbers(numbers_list.size());

    copy(
        numbers_list.begin(),
        numbers_list.end(),
        numbers.begin()
    );

    cout << "Copied numbers: ";

    for (int number : numbers)
    {
        cout << number << ' ';
    }

    cout << endl;
    cout << endl;

    vector<int> times {
        1800, 1845, 0, 2000, 0, 1745, 1600, 0, 1530
    };

    auto remove_iter = remove(
        times.begin(),
        times.end(),
        0
    );

    times.erase(remove_iter, times.end());

    cout << "Times: ";

    for (int time : times)
    {
        cout << time << ' ';
    }

    cout << endl;
    cout << endl;

    vector<int> times2 {
        1800, 1845, 0, 2000, 0, 1745, 1600, 0, 1530
    };

    times2.erase(
        remove(times2.begin(), times2.end(), 0),
        times2.end()
    );

    cout << "Times: ";

    for (int time : times2)
    {
        cout << time << ' ';
    }

    cout << endl;
    cout << endl;

    vector<int> min_max_nums {
        89, 34, 78, 100, 45, 68
    };

    auto min_iter = min_element(
        min_max_nums.begin(),
        min_max_nums.end()
    );

    cout << "Min is " << *min_iter << endl;
    cout << endl;

    auto max_iter = max_element(
        min_max_nums.begin(),
        min_max_nums.end()
    );

    cout << "Max is " << *max_iter << endl;

    int index = max_iter - min_max_nums.begin();

    cout << "Index of maximum: " << index << endl;
    cout << endl;

    vector<int> iota_nums(6);

    iota(iota_nums.begin(), iota_nums.end(), 5);

    cout << "Numbers: ";

    for (int number : iota_nums)
    {
        cout << number << ' ';
    }

    cout << endl;
    cout << endl;

    int total = accumulate(
        iota_nums.begin(),
        iota_nums.end(),
        0
    );

    cout << "accumulate algorithm\n";
    cout << "Total: " << total << endl;
    cout << endl;

    int even_total = accumulate(
        iota_nums.begin(),
        iota_nums.end(),
        0,
        total_even
    );

    cout << "accumulate with a function\n";
    cout << "Total of even numbers: " << even_total << endl;
    cout << endl;

    vector<int> sort_nums {
        5, 7, 34, 6, 1, 890, 17
    };

    sort(sort_nums.begin(), sort_nums.end());

    cout << "sort algorithm\n";
    cout << "Ascending: ";

    for (int number : sort_nums)
    {
        cout << number << ' ';
    }

    cout << endl;
    cout << endl;

    sort(
        sort_nums.begin(),
        sort_nums.end(),
        sort_descending
    );

    cout << "sort with a function\n";
    cout << "Descending: ";

    for (int number : sort_nums)
    {
        cout << number << ' ';
    }

    cout << endl;
    cout << endl;


    vector<string> names {
        "grace",
        "bjarne",
        "steve",
        "ada",
        "katherine"
    };

    sort(names.begin(), names.end());

    cout << "sort ascending\n";
    cout << "Names: ";

    for (string name : names)
    {
        cout << name << ' ';
    }

    cout << endl;
    cout << endl;

    sort(
        names.begin(),
        names.end(),
        sort_string_descending
    );

    cout << "sort descending\n";
    cout << "Names: ";

    for (string name : names)
    {
        cout << name << ' ';
    }

    cout << endl;
    cout << endl;

    sort(
        names.begin(),
        names.end(),
        sort_by_length
    );

    cout << "sort by length\n";
    cout << "Names: ";

    for (string name : names)
    {
        cout << name << ' ';
    }

    cout << endl;
    cout << endl;

    list<double> prices {
        9.99,
        5.78,
        34.25,
        4.99,
        125,
        77.99,
        15.20
    };

    prices.sort();

    bool is_found = binary_search(
        prices.begin(),
        prices.end(),
        15.20
    );

    cout << "search algorithm\n";

    if (is_found)
    {
        cout << "15.20 was found.\n";
    }
    else
    {
        cout << "15.20 was not found.\n";
    }

    cout << endl;

    return 0;
}
