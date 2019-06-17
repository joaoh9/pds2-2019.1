#ifndef CLASSES_H
#define CLASSES_H
#include <string>

class ClasseBase {
   public:
    int var_public;

   private:
    int var_private;

   protected:
    int var_protected;

   public:
    void setPrivate(int i) {
        var_private = i;
    }
    void setProtected(int i) {
        var_protected = i;
    }
    int getPrivate() {
        return var_private;
    }
    int getProtected() {
        return var_protected;
    }
};

class A2 : private ClasseBase {
   public:
    int var_public2;

    void setPublic(int i) {
        var_public = i;
    }

   private:
    int var_private2;

   protected:
    int var_protected2;

   public:
    void setPrivate1(int i) {
        setPrivate(i);
    }
    void setProtected1(int i) {
        setProtected(i);
    }
    void setPrivate2(int i) {
        var_private2 = i;
    }
    void setProtected2(int i) {
        var_protected2 = i;
    }

    int getPublic1() {
        return var_public;
    }
    std::string getPrivate1() {
        return "Inacessivel";
    }
    int getProtected1() {
        return getProtected();
    }
    int getPrivate2() {
        return var_private2;
    }
    int getProtected2() {
        return var_protected2;
    }
};

class A3 : public A2 {
   public:
    int var_public3;

   private:
    int var_private3;

   protected:
    int var_protected3;

   public:
    void setPrivate3(int i) {
        var_private3 = i;
    }
    void setProtected3(int i) {
        var_protected3 = i;
    }

    int getPrivate3() {
        return var_private3;
    }
    int getProtected3() {
        return var_protected3;
    }
};

class ClassePublica : public ClasseBase {
   public:
    int var_public3;

   private:
    int var_private3;

   protected:
    int var_protected3;

   public:
    ClassePublica(int pub, int priv, int prot) {
        var_public = pub;
        setPrivate(priv);
        var_protected = prot;
    }
};

class ClassePrivada : private ClasseBase {
   public:
    ClassePrivada(int pub, int priv, int prot) {
        var_public = pub;
        setPrivate(priv);
        var_protected = prot;
    }
    int getPublic_p() {
        return var_public;
    }
    std::string getPrivate_p() {
        return "Inacessivel";
    }
    int getProtected_p() {
        return getProtected();
    }
};

class OverloadPrivada : private ClasseBase {
   public:
    int var_public;

   private:
    int var_private;

   protected:
    int var_protected;

   public:
    void setPrivate(int i) {
        var_private = i;
    }
    void setProtected(int i) {
        var_protected = i;
    }
    int getPrivate() {
        return var_private;
    }
    int getProtected() {
        return var_protected;
    }
};

#endif
