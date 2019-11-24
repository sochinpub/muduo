#ifndef MUDUO_BASE_NONCOPYABLE_H
#define MUDUO_BASE_NONCOPYABLE_H

namespace muduo
{

// 通过该父类控制子类不可拷贝和赋值构造
class noncopyable
{
 protected:
  noncopyable() = default;
  virtual ~noncopyable() = default;

 private:
  noncopyable(const noncopyable&) = delete;
  noncopyable operator=(const noncopyable&) = delete;
};

}

#endif  // MUDUO_BASE_NONCOPYABLE_H
