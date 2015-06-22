// Requires: <string>

class Blessing {
public:
  //! Returns the value associated with the given string capability.
  const std::string cap(StrCaps c);

  //! Returns the value associated with the given boolean capability.
  bool cap(BoolCaps c);

  //! Returns the value associated with the given integer capability.
  int cap(IntCaps c);

private:
  std::string term;
  
  //! Returns the file path of the terminfo file prased by this blessings instance.
  const std::string get_terminfo_file();
}
