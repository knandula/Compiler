
template<class Element>
class List {
 private:
  std::deque<Element> elems;
 public:
  List() {} 
  int NumElements() const {
    return elems.size();
  } 
  Element Nth(int index) const {   
    return elems[index];
  }
  void InsertAt(const Element &elem, int index) {
    elems.insert(elems.begin() + index, elem);
  }
  void Append(const Element &elem) {
    elems.push_back(elem);
  }
  void RemoveAt(int index) {
    elems.erase(elems.begin() + index);
  }
  void SetParentAll(Node *p) {
    for (int i = 0; i < NumElements(); i++) {
      Nth(i)->set_parent(p);
    }
  }
  void PrintAll(int indentLevel, const char *label = NULL) {
  for (int i = 0; i < NumElements(); i++) {
      Nth(i)->Print(indentLevel, label);
    }
  }
};

