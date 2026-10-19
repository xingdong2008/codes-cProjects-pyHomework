### 案例一：BMI 计算器 / Case 1: BMI Calculator

**1. 初始意图与 Prompt / Initial Intent & Prompt**

- **初始意图 / Initial Intent**：写一个 BMI 计算器，输入身高（m）和体重（kg），输出 BMI 值及健康状况。
  / Write a BMI calculator that takes height (m) and weight (kg) as input and outputs the BMI value and health status.
- **使用 Prompt（应用了 RTCO 原则）/ Prompt Used (RTCO Principle Applied)**：
  - Role（角色）/ Role：你是 Python 初级开发工程师。/ You are a junior Python developer.
  - Task（任务）/ Task：帮我写一个 Python BMI 计算程序。/ Help me write a Python BMI calculator.
  - Context（背景）/ Context：要求包含输入、计算和打印结果。/ The program should include input, calculation, and printing the result.
  - Output（输出）/ Output：提供可以直接运行的 Python 代码。/ Provide runnable Python code.

**2. 翻车现场与错误定位 / The Failure & Error Location**

- **错误代码与现象 / Erroneous Code & Symptom**：AI 生成的代码直接使用了 `float(input())` 进行运算。
  / The AI-generated code directly used `float(input())` for computation.
  - **翻车现象 / Symptom**：当我在控制台输入字母 "abc" 或者直接回车（空值）时，程序崩溃。另外，输入身高为 0 时，程序报错 `ZeroDivisionError`。
    / When I typed letters like "abc" or simply pressed Enter (empty input), the program crashed. Also, entering a height of 0 raised a `ZeroDivisionError`.
  - **具体 Traceback / Traceback**：

```text
Traceback (most recent call last):
  File "bmi.py", line 2, in <module>
    height = float(input("请输入身高(m): "))
ValueError: could not convert string to float: 'abc'
```

- **错误类型 / Error Type**：**异常未防护（语法错误引发的运行时崩溃）/ Unhandled exception (runtime crash caused by invalid input)**。AI 产生了幻觉，假设用户会永远输入合法的浮点数。
  / The AI hallucinated by assuming users would always enter a valid float.

**3. 多轮对话修复与收获 / Multi-turn Fix & Takeaways**

- **追问指令 / Follow-up Instruction**：程序崩溃了，报错 ValueError 和 ZeroDivisionError。请加上异常处理（try-except），确保输入非数字或身高为 0 时提示用户，而不是直接报错退出。
  / The program crashed with ValueError and ZeroDivisionError. Please add exception handling (try-except) so that non-numeric input or a height of 0 shows a message instead of exiting with an error.
- **最终修复代码 / Final Fixed Code**：

```python
while True:
    try:
        height = float(input("请输入身高(m): "))
        weight = float(input("请输入体重(kg): "))
        if height <= 0 or weight <= 0:
            print("身高或体重必须大于0，请重新输入。")
            continue
        bmi = weight / (height ** 2)
        print(f"您的BMI指数为: {bmi:.2f}")
        break
    except ValueError:
        print("输入包含非法字符，请输入纯数字！")
```

- **核心收获 / Key Takeaway**：AI 也会出问题，要做到审视成果。永远不要信任用户的输入，必须做好防御性编程。
  / AI can make mistakes too, so always review its output. Never trust user input — always program defensively.
