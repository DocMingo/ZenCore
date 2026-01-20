# 🧘 ZenCore

> **"Perfection is achieved, not when there is nothing more to add, but when there is nothing left to take away."**
> — *Antoine de Saint-Exupéry*

[![License](https://img.shields.io/badge/license-MIT-green.svg?style=flat-square)](LICENSE)
[![Header Only](https://img.shields.io/badge/linkage-header--only-purple.svg?style=flat-square)]()
[![Zen Mode](https://img.shields.io/badge/zen-enabled-000000.svg?style=flat-square)]()

**ZenCore** 是一套为现代 C++ 开发打造的“静心”组件库。
旨在消除 C++ 日常开发中的样板代码与认知负担，还原编程最原始的流畅感。

它不是一个庞大的框架，而是你手边最趁手的那几件工具。

---

## 🍵 Philosophy (核心哲学)

在构建 ZenCore 时，我们遵循以下 **ZEN** 原则：

* **Z**ero Dependency: 零外部依赖，仅基于 STL 标准库。
* **E**ssential: 只提供 20% 最常用、最核心的功能，解决 80% 的问题。
* **N**atural: 接口设计符合直觉，利用 RAII 实现自动化管理。

---

## 📦 Components (组件库)

所有组件均位于 `zencore` 命名空间下：

| 模块 (Module) | 头文件 (Header) | 功能描述 (Description) |
| :--- | :--- | :--- |
| **Logger** | `<zencore/log.hpp>` | 极简、线程安全、支持 RGB 高亮的异步日志 |
| **Defer** | `<zencore/defer.hpp>` | Go 风格的作用域守卫 (Scope Guard) |
| **Stopwatch**| `<zencore/time.hpp>` | 作用域耗时统计与基准测试工具 |
| **Strings** | `<zencore/str.hpp>` | 更加人性化的字符串处理 (Trim, Split, Join) |
| **FileSystem**| `<zencore/fs.hpp>` | 对 `std::filesystem` 的便捷封装 |

---

## ⚡ Quick Start (快速预览)

### 1. 日志：清晰而宁静
没有复杂的配置文件，甚至不需要初始化。

```cpp
#include "zen/log.hpp"

using namespace zencore;

int main() {
    log::info("ZenCore initialized.");
    
    // 支持 C++20 风格格式化
    int active_users = 42;
    log::success("System healthy. Active users: {}", active_users);
    
    // 醒目的警告与错误
    log::warn("Memory usage approaching limit.");
    log::error("Connection lost: {}", "Timeout");
    
    return 0;
}
```
### 2. ZenTimer: 性能直觉
想知道某段代码慢在哪里？
```
#include "zen/timer.hpp"

void heavy_task() {
    // 离开作用域时自动打印耗时："[Timer] heavy_task took 120ms"
    zen::timer::AutoScope t("heavy_task");
    
    std::this_thread::sleep_for(std::chrono::milliseconds(120));
}
```
## 🤝 Contribution
我们要构建的是一个代码的禅意花园(The Zen Garden)  提交代码时，请保持它像爱情一样简单：

Keep it simple.

Keep it pure.

## 📜 许可证 (License)
本项目采用 MIT License 授权。这意味着你可以自由地在个人或商业项目中使用它，无需通过复杂的法律审核。

**"Code is like love: keep it simple and pure."**

**Handcrafted by DocMingo**
