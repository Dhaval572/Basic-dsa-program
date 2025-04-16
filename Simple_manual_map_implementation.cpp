#include <iostream>
using namespace std;

constexpr int SIZE = 100;

struct Entry
{
    string key{};
    int value{0};
    bool occupied{false};
    bool deleted{false};
};

class HashMap
{
    Entry table[SIZE];

    unsigned int hash(const char *key)
    {
        unsigned int h = 0;
        while (*key != '\0')
        {
            h = (h * 31 + *key) % SIZE;
            key++;
        }

        // You can also use this for make short
        // for (; *key; key++)
        //     h = (h * 31 + *key) % SIZE;

        return h;
    }

public:
    void insert(string key, int val)
    {
        int i = hash(key.c_str()), start = i;

        while (table[i].occupied && !table[i].deleted && table[i].key != key)
        {
            i = (i + 1) % SIZE;
            if (i == start)
            {
                cout << "HashMap full!\n";
                return;
            }
        }

        table[i].key = key;
        table[i].value = val;
        table[i].occupied = true;
        table[i].deleted = false;
    }

    void remove(string key)
    {
        int i = hash(key.c_str()), start = i;
        while (table[i].occupied)
        {
            if (!table[i].deleted && table[i].key == key)
            {
                table[i].deleted = true;
                cout << "Deleted: " << key << "\n";
                return;
            }
            i = (i + 1) % SIZE;
            if (i == start)
                break;
        }
        cout << "Key not found!\n\n";
    }

    void search(string key)
    {
        int i = hash(key.c_str()), start = i;
        while (table[i].occupied)
        {
            if (!table[i].deleted && table[i].key == key)
            {
                cout << "Found: " << key << " => " << table[i].value << "\n\n";
                return;
            }
            i = (i + 1) % SIZE;

            if (i == start)
                break;
        }
        cout << "Key not found!\n";
    }

    void display()
    {
        cout << "Elements of Map: \n";
        for (int i = 0; i < SIZE; ++i)
        {
            if (table[i].occupied && !table[i].deleted)
            {
                cout << table[i].key << " : " << table[i].value << "\n";
            }
        }

        cout << endl;
    }
};

int main()
{
    HashMap map;

    map.insert("Manthan", 108);
    map.insert("Dhyey", 101);
    map.insert("John", 102);
    map.display();

    map.search("John");
    
    map.remove("Dhyey");
    map.remove("Unknown"); 

    map.display();

    return 0;
}
