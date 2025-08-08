function showPattern() {
  const shape = document.getElementById("shapeSelect").value;
  const animationDiv = document.getElementById("patternAnimation");
  const codeDiv = document.getElementById("codeDisplay");

  // Clear old content
  animationDiv.innerHTML = "";
  codeDiv.textContent = "";

  const patterns = {
    horizontalLine: {
      pattern: "* * * * *",
      code: `// Horizontal Line\nfor (int i = 0; i < 5; i++) {\n    cout << "* ";\n}`
    },
    verticalLine: {
      pattern: "*\n*\n*\n*\n*",
      code: `// Vertical Line\nfor (int i = 0; i < 5; i++) {\n    cout << "*\\n";\n}`
    },
    square: {
      pattern: `* * * * *\n* * * * *\n* * * * *\n* * * * *\n* * * * *`,
      code: `// Square\nfor (int i = 0; i < 5; i++) {\n    for (int j = 0; j < 5; j++) {\n        cout << "* ";\n    }\n    cout << "\\n";\n}`
    },
    rhombus: {
      pattern: `    * * * * *\n   * * * * *\n  * * * * *\n * * * * *\n* * * * *`,
      code: `// Rhombus\nfor (int i = 0; i < 5; i++) {\n    for (int s = 0; s < 4 - i; s++) cout << " ";\n    for (int j = 0; j < 5; j++) cout << "* ";\n    cout << "\\n";\n}`
    },
    parallelogram: {
      pattern: `    * * * * *\n   * * * * *\n  * * * * *\n * * * * *\n* * * * *`,
      code: `// Parallelogram\nfor (int i = 0; i < 5; i++) {\n    for (int s = 0; s < 4 - i; s++) cout << " ";\n    for (int j = 0; j < 5; j++) cout << "* ";\n    cout << "\\n";\n}`
    },
    cross: {
      pattern: `*       *\n  *   *\n    *\n  *   *\n*       *`,
      code: `// Cross\nfor (int i = 0; i < 5; i++) {\n    for (int j = 0; j < 5; j++) {\n        if (j == i || j == 4 - i) cout << "*";\n        else cout << " ";\n    }\n    cout << "\\n";\n}`
    },
    plus: {
      pattern: `    *\n    *\n* * * * *\n    *\n    *`,
      code: `// Plus\nfor (int i = 0; i < 5; i++) {\n    for (int j = 0; j < 5; j++) {\n        if (i == 2 || j == 2) cout << "*";\n        else cout << " ";\n    }\n    cout << "\\n";\n}`
    }
  };

  const selected = patterns[shape];

  if (!selected) {
    animationDiv.textContent = "Please select a shape.";
    return;
  }

  // Animate the pattern
  let index = 0;
  let currentLine = "";

  function animate() {
    if (index < selected.pattern.length) {
      const char = selected.pattern[index];
      if (char === "\n") {
        const lineElem = document.createElement("div");
        lineElem.textContent = currentLine;
        animationDiv.appendChild(lineElem);
        currentLine = "";
      } else {
        currentLine += char;
      }
      index++;
      setTimeout(animate, 20); // speed of animation
    } else {
      // add last line if any
      if (currentLine.length > 0) {
        const lineElem = document.createElement("div");
        lineElem.textContent = currentLine;
        animationDiv.appendChild(lineElem);
      }
    }
  }

  animate();
  codeDiv.textContent = selected.code;
}
